#include <stdio.h>

int main()
{
    int length=0;
    printf("请输入人数：");
    scanf("%d",&length);

    int i=1;
    for(i=1;i<=length;i++)
    {
        printf("%d ",i++);
    }
    return 0;
}