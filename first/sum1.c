#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);

	double sum = 0.0;
	for(double k = 1.0;k <= n;k++)
	{
		sum+=1/k;
	}
	printf("%f\n",sum);
}
