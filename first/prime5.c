#include<stdio.h>

int main()
{
	int n,m;

	scanf("%d %d",&n,&m);

	int count = 0;
	int number = 2;
	int sum = 0;
	while(count <= m)
	{
		int isPrime = 1;
		for(int i = 2;i<number;i++)
		{
			if(number%i == 0)
			{
				isPrime = 0;	//不是素数
			}
		}
		if(isPrime == 1)
		{
			count++;
			if(count>=n&&count<=m)
			{
				sum+=number;
			}
			printf("%d ",number);
		}
		number++;
		
	}
	printf("\nsum = %d\n",sum);
}
