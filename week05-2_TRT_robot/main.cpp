
#include <GL/glut.h>
float angle =0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,1);///���
        glutSolidCube(1);

    glPushMatrix();
        glTranslatef(0.25,0.25,0);///3.��ӪF���b�k�W��
        glRotatef(angle,0 ,0 ,1);///2.���
        glTranslatef(0.25,0.25,0);///1.����त�ߩ�b�����I
        glColor3f(1,0,0);///����
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.25,0.25,0);///3.��ӪF���b�k�W��
        glRotatef(angle,0 ,0 ,1);///2.���
        glTranslatef(0.25,0.25,0);///1.����त�ߩ�b�����I
        glColor3f(1,0,0);///����
        glutSolidCube(0.5);
    glPopMatrix();

    glutSwapBuffers();
    angle++;///����++
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week05");

    glutDisplayFunc(display);
    glutIdleFunc(display);///����idle�ɴN���e�e��
    glutMainLoop();
}
