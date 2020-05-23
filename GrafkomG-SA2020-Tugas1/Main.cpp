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

void createBird() {
	// Main wall
	glBegin(GL_LINE_LOOP);
	glColor4ub(74, 74, 74, 1);
	glVertex2f(200, 260);
	glVertex2f(220, 250);
	glVertex2f(240, 260);
	glVertex2f(260, 250);
	glVertex2f(280, 260);
	glVertex2f(280, 261);
	glVertex2f(260, 251);
	glVertex2f(240, 261);
	glVertex2f(220, 251);
	glVertex2f(200, 261);
	glVertex2f(200, 260);
	glEnd();
	// End of wall
}

void createAnotherBird() {
	// Main wall
	glBegin(GL_LINE_LOOP);
	glColor4ub(74, 74, 74, 1);
	glVertex2f(700, 460);
	glVertex2f(720, 450);
	glVertex2f(740, 460);
	glVertex2f(760, 450);
	glVertex2f(780, 460);
	glVertex2f(780, 461);
	glVertex2f(760, 451);
	glVertex2f(740, 461);
	glVertex2f(720, 451);
	glVertex2f(700, 461);
	glVertex2f(700, 460);
	glEnd();
	// End of wall
}

void createMountain() {
	glBegin(GL_POLYGON);
	glColor4ub(38, 130, 54, 1);
	glVertex2f(400, 800);
	glVertex2f(800, 520);
	glColor4ub(114, 176, 125, 1);
	glVertex2f(1280, 800);
	glEnd();

	glBegin(GL_POLYGON);
	glColor4ub(38, 130, 54, 1);
	glVertex2f(0, 600);
	glVertex2f(400, 420);
	glColor4ub(114, 176, 125, 1);
	glVertex2f(1000, 800);
	glVertex2f(0, 800);
	glEnd();
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

void createBigTree() {
	// Main wall
	glBegin(GL_POLYGON);
	glColor4ub(36, 20, 20, 1);
	glVertex2f(900, 600);
	glVertex2f(940, 600);
	glVertex2f(940, 700);
	glVertex2f(900, 700);
	glEnd();

	glBegin(GL_POLYGON);
	glColor4ub(30, 156, 53, 1);
	glVertex2f(920, 500);
	glColor4ub(35, 120, 50, 1);
	glVertex2f(980, 600);
	glVertex2f(860, 600);
	glEnd();	
	
	glBegin(GL_POLYGON);
	glColor4ub(30, 156, 53, 1);
	glVertex2f(920, 440);
	glColor4ub(35, 120, 50, 1);
	glVertex2f(980, 540);
	glVertex2f(860, 540);
	glEnd();	
	
	glBegin(GL_POLYGON);
	glColor4ub(30, 156, 53, 1);
	glVertex2f(920, 380);
	glColor4ub(35, 120, 50, 1);
	glVertex2f(980, 480);
	glVertex2f(860, 480);
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
	createMountain();
	createSun();
	createBird();
	createAnotherBird();
	createLand();

	createBigTree();
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