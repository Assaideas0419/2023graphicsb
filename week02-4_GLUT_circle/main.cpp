#include <GL/glut.h>
#include <math.h>
void myCircle(float r,float x,float y)
{
    glBegin(GL_POLYGON);
    for(float a=0; a<=2*3.141592;a+=0.01){
        glVertex2f(r*cos(a)+x,r*sin(a)+y);
    }
    glEnd();
}
void display()
{
    glColor3f(246/255.0,146/255.0,57/255.0);
    myCircle(0.5,0,0);

    glColor3f(1,0,0);
    myCircle(0.3,0.5,0.5);

    glColor3f(0,1,0);
    myCircle(0.3,-0.5,0.5);

    glColor3f(1,1,0);
    myCircle(0.3,-0.5,-0.5);

    glColor3f(0,0,1);
    myCircle(0.3,0.5,-0.5);

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
