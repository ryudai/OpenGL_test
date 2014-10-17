#include <stdio.h>

#if defined _WIN32 || defined _WIN64 
#include <GL/glut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <glut.h>
#endif


void display()
{
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}