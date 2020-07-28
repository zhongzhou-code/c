#include<stdio.h>

int sum(int begin,int end)
{
	int i;
	int sum = 0;
	for(i = begin;i<=end;i++)
	{
		sum=+i;
	}
	return sum;
}

int main()
{
	int result = 0;
	result = sum(1,10)+
sum(20,30)+
sum(35,45);
	printf("\nresult = %d\n",result);
}
