#include <iostream> // Opsional

#include <GL/freeglut.h>

void createHouse() {

	glBegin(GL_POLYGON);
	glColor4ub(43, 43, 43, 1);
	glVertex2f(10, 500);
	glVertex2f(200, 500);
	glVertex2f(200, 630);
	glVertex2f(10, 630);
	glEnd();

	// Start the roof
	glBegin(GL_POLYGON);
	glColor4ub(181, 181, 181, 1);
	glVertex2f(10, 500);
	glVertex2f(210, 500);
	glVertex2f(210, 530);
	glVertex2f(40, 530);
	glVertex2f(40, 600);
	glVertex2f(10, 600);
	glVertex2f(10, 500);
	glEnd();

	glBegin(GL_POLYGON);
	glColor4ub(181, 181, 181, 1);
	glVertex2f(10, 600);
	glVertex2f(210, 600);
	glVertex2f(210, 630);
	glVertex2f(10, 630);
	glEnd();
	// End the roof

	// Main wall
	glBegin(GL_POLYGON);
	glColor4ub(43, 43, 43, 1);
	glVertex2f(30, 630);
	glVertex2f(190, 630);
	glVertex2f(190, 720);
	glVertex2f(30, 720);
	glEnd();
	// End of wall

	// Window 1
	glBegin(GL_POLYGON);
	glColor4ub(186, 215, 232, 0.64);
	glVertex2f(80, 650);
	glVertex2f(108, 650);
	glVertex2f(108, 720);
	glVertex2f(80, 720);
	glEnd();	
	
	glBegin(GL_POLYGON);
	glColor4ub(186, 215, 232, 0.64);
	glVertex2f(112, 650);
	glVertex2f(140, 650);
	glVertex2f(140, 720);
	glVertex2f(112, 720);
	glEnd();

	// End

	// Window 2
	glBegin(GL_POLYGON);
	glColor4ub(186, 215, 232, 0.64);
	glVertex2f(80, 540);
	glVertex2f(200, 540);
	glVertex2f(200, 590);
	glVertex2f(80, 590);
	glEnd();
	// End
}

void createSunlight() {
	glBegin(GL_POLYGON);
	glColor4ub(255, 254, 214, 1);
	glVertex2f(0, 0);
	glVertex2f(0, 1024);
	glVertex2f(800, 1024);
	glVertex2f(800, 0);
	glEnd();
}

void renderObject() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	createSunlight();
	createHouse();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Pertemuan Pertama ~ Main");
	glutDisplayFunc(renderObject);
	gluOrtho2D(0, 800, 1024, 0);

	glutMainLoop();

	return 0;
}