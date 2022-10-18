#include <stdio.h>

int main()
{
    int i;
    printf("请输入语句：");
    char phase[5];
    for(i=0;;i++)
    {
        scanf("%s",&phase[i]);
        if(phase[i]=='.')
        break;
    }

    for(i=0;;i++)
    {
        char word=phase[i];
        printf("%s",word);
    }
    return 0;


}