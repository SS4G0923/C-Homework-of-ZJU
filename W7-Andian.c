#include <stdio.h>

int main()
{
    int n; int j=0; int num=0;
    printf("输入行列数：");
    scanf("%d",&num);


    int a[num][num]; int i=0; int temp=0; int count=0; int flag=0;
    for(i=0;i<num;i++)
    {
        for(int e=0;e<num;e++)
        {   
            scanf("%d",&a[i][e]);
        }
    }

    /*for(i=0;i<4;i++)                      //输出并查看数组(old version invalid)
    {
        printf("%d ",a[i][0]);
        printf("%d ",a[i][1]);
        printf("%d ",a[i][2]);
        printf("%d\n",a[i][3]);
    }*/

    for(i=0;i<num;i++)
    {
        temp=a[i][0];
        count=0;
        for(j=1;j<num;j++)
        {
            if(a[i][j]>temp)
            {
                temp=a[i][j];
                count=j;
            }
        }
    }

    for(j=0;j<num;j++)
    {
        if(temp>a[j][count])
        {
            flag++;
        }
    }

    if(flag!=0)
    {
        printf("%d,%d。",i-2,count-2);
    }else{
        printf("No");
    }

    return 0;
}
