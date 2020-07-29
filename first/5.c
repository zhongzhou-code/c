#include<stdio.h>
#define NUMBER 25

int main()
{
	int primeTable[NUMBER];
	int x;
	for(int i = 0;i < NUMBER;i++)
	{
		primeTable[i] = 1;
	}
	for(x = 2;x < NUMBER;x++)
	{
		if(primeTable[x])
		{
			for(int i = 2;i*x < NUMBER;i++)
			{
				primeTable[i*x] = 0;
			}
		}
	}
	for(int i = 2;i<NUMBER;i++)
	{
		if(primeTable[i])
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}
