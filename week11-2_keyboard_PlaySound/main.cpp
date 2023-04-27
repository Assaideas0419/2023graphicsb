///week11-2_keyboard_PlaySound 拿week11-1程式來用
#include <windows.h>
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='1') PlaySound("C:\\Users\\Administrator\\Desktop\\Music\\do.wav",NULL,SND_ASYNC);
    if(key=='2') PlaySound("C:\\Users\\Administrator\\Desktop\\Music\\re.wav",NULL,SND_ASYNC);
    if(key=='3') PlaySound("C:\\Users\\Administrator\\Desktop\\Music\\mi.wav",NULL,SND_ASYNC);
    if(key=='4') PlaySound("C:\\Users\\Administrator\\Desktop\\Music\\fa.wav",NULL,SND_ASYNC);
    if(key=='5') PlaySound("C:\\Users\\Administrator\\Desktop\\Music\\so.wav",NULL,SND_ASYNC);
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("Week11");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
