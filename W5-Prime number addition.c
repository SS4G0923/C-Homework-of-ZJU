#include <stdio.h>

int main()
{
    int i=0;int n[200];int s=0;
    
    for(i=1;i<=200;i++)
    {
        if(i<10)
        {
            if(i%2!=0 && i!=9)
            {
                n[s]=i;
                s++;
                //printf("%d ",i);
            }
        }
        if(i>10)
        {
            if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
            {
                n[s]=i;
                s++;
                //printf("%d ",i);
            }
        
        }
    }
    
    int m=0; int w=0; int sum=0;
    
    printf("请输入区间范围：");
    scanf("%d",&m);
    scanf("%d",&w);
    for(s=m-1;s<=w-1;s++)
    {
        sum=n[s]+sum;
    }
    printf("%d",sum);

    return 0;
}


