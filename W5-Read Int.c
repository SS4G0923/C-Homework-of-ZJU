#include <stdio.h>

int main()
{
    int number;
    printf("请输入数字：");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("fu ");
        number = -number;
    }

    int temp = number;
    int cnt = 1;
    while (temp > 9)
    {
        temp /= 10;
        cnt *= 10;      
    } 

    while ( cnt > 0)
    {
        int i;
        i = number / cnt;       
        switch (i)
        {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;          
        }
        number %= cnt;
        cnt /= 10;
        if (cnt > 0)
        {
            printf(" ");
        }
        
    }
        
    return 0;
} 




