#include<stdio.h>

int main()
{
	int number = 0;
	int sum = 0;
	int count = 0;

	do
	{
		scanf("%d",&number);

		
		sum += number;
		count++;
		
	}while(number != -1);
	sum+=1;
	count--;
	printf("%f\n",(sum*1.0)/count);
	return 0;
}
