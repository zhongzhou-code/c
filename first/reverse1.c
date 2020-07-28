#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int digit = 0;
	int result = 0;
	while(x>0)
	{
		digit = x%10;
		x /= 10;
		printf("%d",digit);
		result = result*10 + digit;
	}
	printf("\nresult = %d\n",result);
	return 0;
}
