#include <stdio.h>

int main()
{
    int time1=0; int hour1=0; int hour2=0; int minute_digit_one=0; int minute_digit_two=0; //1 represents UTC and 2 represents BJT 
    printf("请输入需要转换的UTC时间: ");
    scanf("%d",&time1);
    hour1=time1/100;
    minute_digit_one=time1%100;
    minute_digit_one=minute_digit_one/10;
    minute_digit_two=time1%10;

if(hour1>8)
{
    hour2=hour1-8;
    printf("BJT时间为: %d%d%d",hour2,minute_digit_one,minute_digit_two);
}else{
    hour2=24+(hour1-8);
    printf("BJT时间为: %d%d%d",hour2,minute_digit_one,minute_digit_two);

}
    return 0;   
}