#include <windows.h>
#include <stdio.h>
int main()
{
    PlaySound("Music/do.wav",NULL,SND_SYNC);
    printf("Hello World\n");
}
