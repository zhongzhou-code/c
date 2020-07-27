#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	do
	{
		printf("请输入猜测的数字:");
		scanf("%d",&a);
		if(a > number)
		{
			printf("您猜测的数字大于随机数\n");
		}
		else if(a < number)
		{
			printf("您猜测的数字小于随机数\n");
		}
		count++;	
	}while(a!=number);
	
	printf("--------------------\n您的猜测次数是:%d\n",count);
}

