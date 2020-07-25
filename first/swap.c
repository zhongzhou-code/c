#include<stdio.h>

int main()
{
	int a = 5;
	int b = 6;
	int t = 0;
	printf("a = %d, b = %d, t = %d\n",a,b,t);
	t = a;
	a = b;
	b = t;
	printf("a = %d, b = %d, t = %d\n",a,b,t);
	return 0;
}

