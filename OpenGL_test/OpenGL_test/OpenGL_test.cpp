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
	glFlush();

}

void init()
{
	glClearColor(0.0, 0.5, 0.2, 0.0);
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}