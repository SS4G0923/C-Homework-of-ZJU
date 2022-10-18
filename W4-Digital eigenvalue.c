#include <stdio.h>

int main()
{
    int array=0;
    printf("请输入数组:");
    scanf("%d",&array);

    int digit=0; int i=0; double number=0.5; int total1=0; int total2=0; int total=0;
    for(i=1;i<10000;i++)
    {
        digit=array%10;
        number=number*2;
        if(i%2==0&&digit%2==0)  //均为偶数
        {
            total1=number;
            total=total+total1;
        }else if(i%2!=0&&digit%2!=0)//均为奇数
        {
            total2=number;
            total=total+total2;
        }
        array=array/10;
        if(array<=0)
        break;
    }    
    
    printf("数字特征值为:%d",total);
    return 0;
}