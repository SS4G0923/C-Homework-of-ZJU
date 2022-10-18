#include <stdio.h>

int main()
{
    int number=0;
    printf("请输入三位数字：\n");
    scanf("%d",&number);
    
    int x1=0; int x10=0; int x100=0;
    x100=number/100;
    x10=number%100;
    x10=x10/10;
    x1=number%10;

    if(x10==0&&x1==0)
    {
        printf("%d",x100);
    }else if(x1==0) {
        printf("%d%d",x10,x100);
    }else{
        printf("%d%d%d",x1,x10,x100);
    }
    return 0;
}