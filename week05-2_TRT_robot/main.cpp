
#include <GL/glut.h>
float angle =0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,1);///綠色
        glutSolidCube(1);

    glPushMatrix();
        glTranslatef(0.25,0.25,0);///3.整個東西放在右上角
        glRotatef(angle,0 ,0 ,1);///2.轉動
        glTranslatef(0.25,0.25,0);///1.把旋轉中心放在中心點
        glColor3f(1,0,0);///紅色
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.25,0.25,0);///3.整個東西放在右上角
        glRotatef(angle,0 ,0 ,1);///2.轉動
        glTranslatef(0.25,0.25,0);///1.把旋轉中心放在中心點
        glColor3f(1,0,0);///紅色
        glutSolidCube(0.5);
    glPopMatrix();

    glutSwapBuffers();
    angle++;///角度++
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week05");

    glutDisplayFunc(display);
    glutIdleFunc(display);///有空idle時就重畫畫面
    glutMainLoop();
}
