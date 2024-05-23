#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void init() {
    glClearColor(1.0, 0.875, 0.894, 1.0); // Set the background color to light pink
}

// Function to display content on the window
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glFlush();
}

// Function to handle window resizing
void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Window");
    
    init();
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape); 
    
    glutMainLoop();
    
    return 0;
}

