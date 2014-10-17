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
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glVertex2d(-0.9, -0.9);
	glVertex2d(0.9, -0.9);
	glVertex2d(0.9, 0.9);
	glVertex2d(-0.9, 0.9);
	glEnd();
	glFlush();

}

void init()
{
	glClearColor(0.0, 1.0, 0.0, 0.0);
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	
	init();

	glutMainLoop();

	return 0;
}