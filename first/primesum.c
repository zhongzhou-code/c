#include<stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int sum = 0;
	for(int k = n;k <= m;k++)
	{
		int isPrime = 1;	//是素数
		for(int i = 2;i < k;i++)
		{
			if(k%i==0)
			{
				isPrime = 0;	 //不是素数
				break;
			}
		}
		if(isPrime == 1)
		{
			sum+=k;
		}
	}
	printf("\n所有素数之和:%d\n",sum);
	
}
