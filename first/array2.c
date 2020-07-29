#include<stdio.h>

#define NUM 10

int main(void)
{
	int x;
	int count[NUM];

	for(int i = 0;i<NUM;i++)
	{
		count[i] = 0;
	}
	scanf("%d",&x);
	while(x != -1)
	{
		if(x>=0 && x<=9)
		{
			count[x]++;
		}
		scanf("%d",&x);
	}
	for(int i = 0;i < NUM;i++)
	{
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}
