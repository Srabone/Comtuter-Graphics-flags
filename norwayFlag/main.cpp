//NORWAY
#include <windows.h>  // for MS Windows
#include <GL/gl.h>
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    // Set background color to black
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to ash
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	glBegin(GL_QUADS);
	glColor3f(0.73f, 0.05f, 0.18f); //magenda square
    glVertex2f(-0.8f, 0.7f);    // x, y
	glVertex2f(-0.8f, -0.4f);    // x, y
    glVertex2f(0.6f, -0.4f);    // x, y
	glVertex2f(0.6f, 0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //verticle white line
    glVertex2f(-0.55f, 0.7f);    // x, y
	glVertex2f(-0.55f, -0.4f);    // x, y
    glVertex2f(-0.3f, -0.4f);    // x, y
	glVertex2f(-0.3f, 0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //horizontal white line
    glVertex2f(-0.8f, 0.29f);    // x, y
	glVertex2f(-0.8f, 0.01f);    // x, y
    glVertex2f(0.6f, 0.01f);    // x, y
	glVertex2f(0.6f, 0.29f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.13f, 0.36f); //verticle blue line
    glVertex2f(-0.49f, 0.7f);    // x, y
	glVertex2f(-0.49f, -0.4f);    // x, y
    glVertex2f(-0.36f, -0.4f);    // x, y
	glVertex2f(-0.36f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.13f, 0.36f); //horizomtal blue line
    glVertex2f(-0.8f, 0.23f);    // x, y
	glVertex2f(-0.8f, 0.07f);    // x, y
    glVertex2f(0.6f, 0.07f);    // x, y
	glVertex2f(0.6f, 0.23f);
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
