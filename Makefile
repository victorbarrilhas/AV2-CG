# the compiler: gcc for C program, define as g++ for C++
CC = gcc
CXX = g++
# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall
LINKING = -lglut -lGL -lGLU
TARGET = index
OUTPUT_FILE = out.out

all:
	$(CXX) $(CFLAGS) -o $(OUTPUT_FILE) $(TARGET).cpp $(LINKING)
	./$(OUTPUT_FILE)

clean:
	$(RM) $(TARGET)