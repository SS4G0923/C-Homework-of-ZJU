#include<stdio.h>

int main()
{
    int c = 0,n = 0,count = 0;
    int a[100][2];
    for (int i = 0; i < 100; i++) 	//遍历数组，初始化
    {
        for (int j = 0; j < 2; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int b = 0; b < 2; b++) 	//循环两次录入两个多项式
    {
        do		//录入多项式，并将最高次幂做记录
        {
            scanf("%d%d", &n, &c);
            a[n][0] = n;
            a[n][1] += c;	//相同次幂的系数相加
            if (count < n)	//记录最高次
            {
                count = n;
            }
        } while (n != 0);
    }
    for (int x = count; x >= 0; x--)	//循环输出，由最高次逐次输出
    {
        if (a[x][1] != 0)	//系数为0时不输出
        {
            if (x == 1)	   //次数为一时不输出次数
            {
                printf("%dx+", a[x][1]);
            }
            else if (x == 0)	//次数为0时，不输出+，x和次数
            {
                printf("%d", a[x][1]);
            }
            else	//其他情况输出结果后面带加号
            {
                printf("%dx%d+", a[x][1], a[x][0]);
            }
        }
    }
}
