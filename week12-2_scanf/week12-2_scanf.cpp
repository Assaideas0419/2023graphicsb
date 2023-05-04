#include <stdio.h>
int main()
{
    char line[20];
    ///scanf("%s",line);
    FILE*fin =fopen("file.txt","r");
    fscanf(fin,"%s",line);
    printf("讀到了:%s",line);///馬上印
    fscanf(fin,"%s",line);
    printf("讀到了:%s\n",line);///馬上印
}
