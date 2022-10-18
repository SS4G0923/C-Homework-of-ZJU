#include <stdio.h>

int main()
{
    int m=0; int n=0;
    printf("请输入算式：");
    scanf("%d/%d",&m,&n);
    printf("0.");

    for(int i=0;i<200;i++)
    {
		m*=10;
		printf("%d",m/n);
		if(m%n==0) break;
		m=m%n;	
    }
    printf("\n");
	return 0; 
}