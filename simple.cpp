#include <GLUT/glut.h>
#include <iostream>
#include <cstdlib>

void render(void);
void keyboard(unsigned char c, int x, int y);
void mouse(int button, int state, int x, int y);

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Test GLUT App");

    glutDisplayFunc(render); // render
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);

    glutMainLoop(); // initialization finished. start rendering
}

void render(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.2, 0.9);
    glVertex2f(-0.5, -0.5);
    glColor3f(0.1, 0.2, 0.5);
    glVertex2f(0.0, -0.5);
    glColor3f(0.3, 0.9, 0.7);
    glVertex2f(0.0, 0.5);
    glEnd();

    glutSwapBuffers();  
}

void keyboard(unsigned char c, int x, int y)
{
    if(c == 27)
    {
        exit(0);
    }
}

void mouse(int button, int state, int x, int y)
{
    if(button == GLUT_RIGHT_BUTTON)
    {
        exit(0);
    }
}