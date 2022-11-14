#include <GL/glut.h>
#include <cmath>

int eixo = 1;

void funcao()
{
}

void Eixo()
{

  glColor3f(0, 0, 0);
  glLineWidth(1);
  glBegin(GL_LINES);
  glVertex2f(-10, 0);
  glVertex2f(10, 0);
  glVertex2f(0, 10);
  glVertex2f(0, -10);
  glEnd();
}

void Layout()
{

  glColor3f(0, 0, 0);

  glLineWidth(1);

  glBegin(GL_LINES);

  glVertex2f(10.4, 7.5);

  glVertex2f(14.6, 7.5);

  glVertex2f(12.5, 5.4);

  glVertex2f(12.5, 9.6);

  glEnd();

  glLineWidth(5);

  glBegin(GL_LINE_LOOP);

  glVertex2f(-10, 10);

  glVertex2f(-10, -10);

  glVertex2f(15, -10);

  glVertex2f(15, 10);

  glEnd();

  glLineWidth(2.5);

  glBegin(GL_LINES);

  glVertex2f(10, -10);

  glVertex2f(10, 10);

  glVertex2f(10, 5);

  glVertex2f(15, 5);

  glVertex2f(10, 2.5);

  glVertex2f(15, 2.5);

  glVertex2f(10, 0);

  glVertex2f(15, 0);

  glVertex2f(10, -2.5);

  glVertex2f(15, -2.5);

  glVertex2f(10, -5);

  glVertex2f(15, -5);

  glVertex2f(10, -7.5);

  glVertex2f(15, -7.5);

  glEnd();
}

void Display()
{

  glClearColor(0.8, 0.8, 0.8, 0);

  glClear(GL_COLOR_BUFFER_BIT);

  if (eixo == 1)
  {

    Eixo();
  }

  Layout();

  glFlush();
}

void TeclasEspeciais(int key, int x, int y)
{

  switch (key)
  {

  case GLUT_KEY_UP:

    // subir a funcao

    break;

  case GLUT_KEY_DOWN:

    // descer a funcao

    break;
  }

  Display();
}

void Teclado(unsigned char key, int x, int y)
{

  switch (key)
  {

  case '1':

    // Laranja

    break;

  case '2':

    // Ciano

    break;

  case '3':

    // Magenta

    break;

  case '4':

    // Amarelo

    break;

  case '5':

    // Azul

    break;

  case '6':

    // Vermelho

    break;

  case '7':

    // Verde

    break;

  case '8':

    // Cinza

    break;

  case 'e':

  case 'E':

    eixo = eixo * (-1);

    break;

  case 'A':

  case 'a':

    break;
  }

  Display();
}

void Mouse(int button, int state, int x, int y)
{

  if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN))
  {

    if ((x > 400) && (y < 100))

      eixo = eixo * (-1);
  }

  Display();
}

int main(int argc, char** argv)
{

  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowSize(500, 400);

  glutInitWindowPosition(450, 100);

  glutCreateWindow("AV2 - 2022/2 - CG");

  glutMouseFunc(Mouse);

  glutKeyboardFunc(Teclado);

  glutSpecialFunc(TeclasEspeciais);

  gluOrtho2D(-10, 15, -10, 10);

  glutDisplayFunc(Display);

  glutMainLoop();

  return (0);
}