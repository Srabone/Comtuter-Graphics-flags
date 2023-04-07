//kuwait
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
	glColor3f(1.00f, 1.00f, 1.00f); //full white square
    glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.9f, -0.9f);    // x, y
    glVertex2f(0.9f, -0.9f);    // x, y
	glVertex2f(0.9f, 0.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.00f, 0.00f, 0.00f); //left black side
    glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.9f, -0.9f);    // x, y
    glVertex2f(-0.5f, -0.3f);    // x, y
	glVertex2f(-0.5f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.00f, 0.48f, 0.24f); //top green side
    glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.5f, 0.3f);    // x, y
    glVertex2f(0.9f, 0.3f);    // x, y
	glVertex2f(0.9f, 0.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.07f, 0.15f); //red side
    glVertex2f(-0.5f, -0.3f);    // x, y
	glVertex2f(-0.9f, -0.9f);    // x, y
    glVertex2f(0.9f, -0.9f);    // x, y
	glVertex2f(0.9f, -0.3f);
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
