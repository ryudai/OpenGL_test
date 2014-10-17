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
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();

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