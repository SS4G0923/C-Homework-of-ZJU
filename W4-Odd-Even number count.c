#include <stdio.h>

int main ()
{
    int i=0; int len=10000; int NumOdd=0; int NumEven=0;
    int n[10000];
    printf("请输入数组:");
    for(i=0;i<=10000;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]==-1)
        break;
    
    }
    int s=0;
    for(s=0;s<i;s++)
    {
        if(n[s]%2==0)
        {
            NumEven++;
        }else{
            NumOdd++;
        }
    }
    
    printf("偶数的个数为%d,奇数的个数为%d。",NumEven,NumOdd);

    return 0;
}