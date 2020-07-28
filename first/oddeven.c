#include<stdio.h>

int main()
{
	int num = 0;
	int odd = 0;
	int even = 0;
	do
	{
		scanf("%d",&num);

		if(num%2 == 1)	//奇数
		{
			odd++;
		}
		else if(num%2 == 0)
		{
			even++;
		}
	}while(num != -1);
	printf("奇数:%d\n",odd);
	printf("偶数:%d\n",even);
}
