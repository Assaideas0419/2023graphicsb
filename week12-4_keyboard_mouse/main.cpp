///week12-4_keyboard_mouse
#include <stdio.h>
#include <GL/glut.h>
///CodeBlock的專案設定 Project-Properties裡面第二個Build Target
///Executing working dir 工作執行目錄
///原本是C:\Users\Administrator\Desktop/freeglut\bin
///改成.(小數點)再File/Save everything 便能將專案檔儲存好
///之後妳的工作執行目錄就在妳程式專案的那一個目錄裡面
///但執行時，就會少了freeglut.dll檔，需手動copy到專案目錄裡面
float teapotX=0,teapotY=0;
FILE*fout=NULL;
FILE*fin=NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(teapotX,teapotY,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    teapotX=(x-150)/150.0;
    teapotY=(150-y)/150.0;
    if(state==GLUT_DOWN){
        if(fout==NULL)fout=fopen("file4.txt","w");
        fprintf(fout,"%f %f\n",teapotX,teapotY);
    }
    display();
}
void keyboard(unsigned char key,int x,int y)
{
    if(fin==NULL){
        fclose(fout);
        fin=fopen("file4.txt","r");
    }
    fscanf(fin,"%f%f",&teapotX,&teapotY);
    display();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week12");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();
}
