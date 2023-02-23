#include <GL/glut.h>
void display()
{
    glColor3f(246/255.0,146/255.0,57/255.0);
    glBegin(GL_POLYGON);
        glVertex2f((65-100)/100.0,-(54-100)/100.0);
        glVertex2f((34-100)/100.0,-(138-100)/100.0);
        glVertex2f((59-100)/100.0,-(138-100)/100.0);
        glVertex2f((87-100)/100.0,-(53-100)/100.0);
    glEnd();
    glutSwapBuffers();
}
int main(int argc,char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("Week02-2");
	glutDisplayFunc(display);
	glutMainLoop();
}

