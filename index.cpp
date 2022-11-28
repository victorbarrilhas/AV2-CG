#include <GL/glut.h>
#include <cmath>

int eixo = 1;
float R=0, G=0, B=0;
float a = 1, b=0, c=0;

void funcao(){

float x,y;

glColor3f(R,G,B);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);    
    for (x=-10; x<10; x=x+0.01){
        y = a*x*x+b*x+c;
        glVertex2f(x,y);
    }

    glEnd();
}

void Eixo(){

    glColor3f(0,0,0);
    glLineWidth(1);
    glBegin(GL_LINES);
        glVertex2f(-10,0);
        glVertex2f( 10,0);

        glVertex2f(0, 10);
        glVertex2f(0,-10);

    glEnd();

}

void Layout(){
    
    float x,y;
    
    glBegin(GL_QUADS);
        glColor3f(0,0,0);
        glVertex2f(10.85, 0.4);
        glVertex2f(11.65, 0.4);
        glVertex2f(11.65, 1.6);
        glVertex2f(10.85, 1.6);
    glEnd();


    
    glBegin(GL_TRIANGLES);
        glVertex2f(12.05, 1.4);
        glVertex2f(10.45, 1.4);
        glVertex2f(11.25, 2.2);
    glEnd();
    
    glBegin(GL_QUADS);
        glColor3f(0,0,0);
        glVertex2f(13.35, 2.1);
        glVertex2f(14.15, 2.1);
        glVertex2f(14.15, 0.9);
        glVertex2f(13.35, 0.9);
    glEnd();
    
    glBegin(GL_TRIANGLES);
        glVertex2f(14.55, 1.1);
        glVertex2f(12.95, 1.1);
        glVertex2f(13.75, 0.3);      
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1, 0.64, 0);
        glVertex2f(10, 0);
        glVertex2f(10, -2.5);
        glVertex2f(12.5, -2.5);
        glVertex2f(12.5, 0);
        
        glColor3f(0, 1, 1);
        glVertex2f(12.5, 0);
        glVertex2f(12.5, -2.5);
        glVertex2f(15, -2.5);
        glVertex2f(15, 0);
        
        glColor3f(1, 0, 1);
        glVertex2f(10, -2.5);
        glVertex2f(10, -5);
        glVertex2f(12.5, -5);
        glVertex2f(12.5, -2.5);

        glColor3f(1, 1, 0);
        glVertex2f(12.5, -2.5);
        glVertex2f(12.5, -5);
        glVertex2f(15, -5);
        glVertex2f(15, -2.5);
        
        glColor3f(0, 0, 1);
        glVertex2f(10, -5);
        glVertex2f(10, -7.5);
        glVertex2f(12.5, -7.5);
        glVertex2f(12.5, -5);
        
        glColor3f(1, 0, 0);
        glVertex2f(12.5, -5);
        glVertex2f(12.5, -7.5);
        glVertex2f(15, -7.5);
        glVertex2f(15, -5);
    
        glColor3f(0, 1, 0);
        glVertex2f(10, -7.5);
        glVertex2f(10, -10);
        glVertex2f(12.5, -10);
        glVertex2f(12.5, -7.5);

        glColor3f(0.2, 0.2, 0.2);
        glVertex2f(12.5, -7.5);
        glVertex2f(12.5, -10);
        glVertex2f(15, -10);
        glVertex2f(15, -7.5);
    glEnd();

    glColor3f(0,0,0);
    glLineWidth(1);
    //comeco cruz do menu superior
     glBegin(GL_LINES);
         glVertex2f(10.4, 7.5);
         glVertex2f(14.5, 7.5);
         glVertex2f(12.5, 5.4);
         glVertex2f(12.5, 9.3);   
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
      glVertex2f(-10, 10);
      glVertex2f(-10,-10);
      glVertex2f( 15,-10);
      glVertex2f( 15, 10);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
      glVertex2f( 10,-10);
      glVertex2f( 10, 10);
 
      glVertex2f( 10, 5.0);
      glVertex2f( 15, 5.0);

      glVertex2f( 10, 2.5);
      glVertex2f( 15, 2.5);

      glVertex2f( 10, 0.0);
      glVertex2f( 15, 0.0);

      glVertex2f( 10,-2.5);
      glVertex2f( 15,-2.5);

      glVertex2f( 10,-5.0);
      glVertex2f( 15,-5.0);

      glVertex2f( 10,-7.5);
      glVertex2f( 15,-7.5);      

      glVertex2f(12.5, 5.0);
      glVertex2f(12.5, -10);

    glEnd();    
    
    glLineWidth(1);
    glColor3f(0,0,0);
    glBegin(GL_LINE_STRIP);
       for(x = -1.1 ; x <= 1.1 ; x = x + 0.01){
             y = x * x;
             glVertex2f(x + 11.2, y + 3);
       }
    glEnd();

    glBegin(GL_LINE_STRIP);
       for(x = -1.1 ; x <= 1.1 ; x = x + 0.01){
             y = - x * x;
             glVertex2f(x + 13.6 , y + 4.5) ;
       }
    glEnd();

}

void Display(){

glClearColor(0.8,0.8,0.8, 0);
glClear(GL_COLOR_BUFFER_BIT );

if(eixo == 1){
        Eixo();
    }

Layout();

funcao();

glFlush();

}

void TeclasEspeciais(int key, int x, int y) {

switch(key) {

case GLUT_KEY_UP:
//subir a funcao
c = c + 1;
break;

case GLUT_KEY_DOWN:
//descer a funcao
c = c-1;
break;

}

Display();

}

void Teclado(unsigned char key, int x, int y){

switch(key) {

case '1':
//Laranja
R = 1; G = 0.64, B = 0;

break;

case '2':
//Ciano
R = 0; G = 1, B = 1;

break; 

case '3':
//Magenta
R = 1; G = 0, B = 1;

break;

case '4':
//Amarelo
R = 1; G = 1, B = 0;

break;   

case '5':
//Azul
R = 0; G = 0, B = 1;

break;   

case '6':
//Vermelho
R = 1; G = 0, B = 0;

break;   

case '7':
//Verde
R = 0; G = 1, B = 0;

break;   

case '8':
//Cinza
R = 0.2; G = 0.2, B = 0.2;

break;

case 'e':
case 'E':
eixo = eixo * (-1);

break;

case 'A':
case 'a':
a = a * (-1);

break;

}

Display();

}

void Mouse(int button, int state, int x, int y){

 if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN)){
 
        if ((x>400) && (y < 100)){
            eixo = eixo * (-1);
        }

        //parábolas
        if ((y > 100) && (y < 150)){
            if((x > 400) && (x < 450))
               a = 1;
            if (x > 450)
               a = -1;   
        }
        
        if ((y > 150) && (y < 200)){
            if((x > 400) && (x < 450))
               c = c + 1;
            if (x > 450)
               c = c - 1;   
        }

        //cores       
        if((x > 400) && (x < 450)){
            if( (y > 300) && (y < 350)){
                R = 0; G = 0 ; B = 1;
            }
 
            if( (y > 350) && (y < 400)){
                R = 0; G = 1 ; B = 0;
            }
            
            if( (y > 200) && (y < 300)){
                R = 1; G = 0 ; B = 1;
            }
            
            if( (y > 200) && (y < 250)){
                R = 1; G = 0.64 ; B = 0;
            }            
        }
        
        if((x > 450) && (x < 500)){
 
            if( (y > 300) && (y < 350)){
                R = 1; G = 0 ; B = 0;
            }
 
            if( (y > 350) && (y < 400)){
                R = 0.2; G = 0.2; B = 0.2;
            }
            
            if( (y > 250) && (y < 300)){
                R = 1; G = 1 ; B = 0;
            }
            
            if( (y > 200) && (y < 250)){
                R = 0; G = 1 ; B = 1;
            }                                                
 
        }
    }
Display();
}

int main(int argc, char **argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(500,400);
glutInitWindowPosition(450,100);
glutCreateWindow("AV2 - 2022/2 - CG");

glutMouseFunc(Mouse);

glutKeyboardFunc(Teclado);

glutSpecialFunc(TeclasEspeciais);

gluOrtho2D(-10,15,-10,10);

glutDisplayFunc(Display);

glutMainLoop();

return(0);

}

