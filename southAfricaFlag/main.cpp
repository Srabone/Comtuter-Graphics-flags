//south africa
#include <windows.h>  // for MS Windows
#include <GL/gl.h>
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
	glClearColor(0.89f, 0.81f, 0.99f, 0.87f); // Set background color to ash
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_QUADS);
	glColor3f(0.00f, 0.48f, 0.3f); //full green
    glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.9f, -0.9f);    // x, y
    glVertex2f(0.9f, -0.9f);    // x, y
	glVertex2f(0.9f, 0.9f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.00f, 0.71f, 0.07f); //left yellow side
    glVertex2f(-0.9f, 0.64f);    // x, y
	glVertex2f(-0.9f, -0.64f);    // x, y
    glVertex2f(-0.25f, 0.00f);    // x, y
	//glVertex2f(0.9f, -0.18f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.00f, 1.00f, 1.00f); //upper white
    glVertex2f(-0.73f, 0.9f);    // x, y
	glVertex2f(0.0f, 0.15f);    // x, y
    glVertex2f(0.9f, 0.15f);    // x, y
	glVertex2f(0.9f, 0.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.00f, 1.00f, 1.00f); //lower white
    glVertex2f(-0.73f, -0.9f);    // x, y
    glVertex2f(0.0f, -0.15f);
	glVertex2f(0.9f, -0.15f);    // x, y
    glVertex2f(0.9f, -0.9f);    // x, y
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.14f, 0.58f); //lower blue
    glVertex2f(-0.575f, -0.9f);    // x, y
    glVertex2f(0.9f, -0.9f);
	glVertex2f(0.9f, -0.275f);    // x, y
    glVertex2f(0.025f, -0.275f);    // x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.87f, 0.22f, 0.19f); //upper magenda
    glVertex2f(-0.575f, 0.9f);    // x, y
	glVertex2f(0.025f, 0.275f);    // x, y
    glVertex2f(0.9f, 0.275f);    // x, y
	glVertex2f(0.9f, 0.9f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.00f, 0.00f, 0.00f); //left black side
    glVertex2f(-0.9f, 0.51f);    // x, y
	glVertex2f(-0.9f, -0.51f);    // x, y
    glVertex2f(-0.37f, 0.00f);    // x, y
	//glVertex2f(0.9f, -0.18f);
	glEnd();


	glFlush();  // Render now
}




/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1020, 780);   // Set the window's initial width & height
	glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Vertex, Primitive & color"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	//myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
