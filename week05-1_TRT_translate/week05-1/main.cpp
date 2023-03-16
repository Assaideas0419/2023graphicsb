#include <GL/glut.h>
float angle=0;///全域變數 Angle角度
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///清畫面
    glColor3f(1,0,0);
    glPushMatrix();///備份矩陣
        glRotatef(angle,0,0,1);
        glTranslatef(0.8,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣

    glColor3f(0,1,0);
    glPushMatrix();
        glTranslatef(0.8,0,0);
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();
    angle++;///角度++
}
int main(int argc,char *argv[])
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week04");


    glutDisplayFunc(display);
    glutIdleFunc(display);///有空就重畫畫面
    glutMainLoop();
}
