//togo
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
	glColor3f(0.00f, 0.42f, 0.31f); //full green
    glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.9f, -0.9f);    // x, y
    glVertex2f(0.9f, -0.9f);    // x, y
	glVertex2f(0.9f, 0.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.00f, 0.81f, 0.00f); //nich yellow side
    glVertex2f(-0.9f, -0.18f);    // x, y
	glVertex2f(-0.9f, -0.54f);    // x, y
    glVertex2f(0.9f, -0.54f);    // x, y
	glVertex2f(0.9f, -0.18f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.82f, 0.06f, 0.2f); //left red side
    glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.9f, -0.18f);    // x, y
    glVertex2f(-0.18f, -0.18f);    // x, y
	glVertex2f(-0.18f, 0.9f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.00f, 0.81f, 0.00f); //upper yellow side
    glVertex2f(-0.18f, 0.54f);    // x, y
	glVertex2f(-0.18f, 0.18f);    // x, y
    glVertex2f(0.9f, 0.18f);    // x, y
	glVertex2f(0.9f, 0.54f);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //star polygon
    glVertex2f(-0.66f, 0.3f);
    glVertex2f(-0.75f, 0.0f);
    glVertex2f(-0.54f, 0.18f);
    glVertex2f(-0.34f, 0.0f);
    glVertex2f(-0.4f, 0.3f);     // x, y
    glVertex2f(-0.2f, 0.45f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.54f, 0.8f);
    glVertex2f(-0.63f, 0.48f);
    glVertex2f(-0.87f, 0.45f);
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
