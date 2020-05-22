#include <iostream> // Opsional

#include <GL/freeglut.h>

void createHouse() {
	// Wall on top
	glBegin(GL_POLYGON);
	glColor4ub(43, 43, 43, 1);
	glVertex2f(10, 500);
	glVertex2f(200, 500);
	glVertex2f(200, 630);
	glVertex2f(10, 630);
	glEnd();
	// End

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

void createLand() {
	// Main wall
	glBegin(GL_POLYGON);
	glColor4ub(90, 83, 83, 1);
	glVertex2f(0, 700);
	glVertex2f(0, 800);
	glColor4ub(42, 35, 35, 1);
	glVertex2f(1024, 800);
	glVertex2f(1024, 700);
	glEnd();
	// End of wall
}

void createSun() {
	// Main wall
	glBegin(GL_POLYGON);
	glColor4ub(242, 206, 63, 1);
	glVertex2f(900, 30);
	glVertex2f(980, 30);
	glVertex2f(980, 120);
	glVertex2f(900, 120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor4ub(247, 217, 99, 1);
	glVertex2f(940, 10);
	glVertex2f(1000, 75);
	glColor4ub(255, 233, 145, 1);
	glVertex2f(940, 140);
	glVertex2f(880, 75);
	glEnd();
	// End of wall
}

void createSunlight() {
	glBegin(GL_POLYGON);
	glColor4ub(255, 254, 214, 1);
	glVertex2f(0, 0);
	glVertex2f(0, 1024);
	glVertex2f(1024, 1024);
	glVertex2f(1024, 0);
	glEnd();
}

void renderObject() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	createSunlight();

	createSun();

	createLand();
	createHouse();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(1024, 800);
	glutCreateWindow("Tugas Pertama ~ Kelvin Kurniawan");
	glutDisplayFunc(renderObject);
	gluOrtho2D(0, 1024, 800, 0);

	glutMainLoop();

	return 0;
}