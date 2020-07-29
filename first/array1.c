#include<stdio.h>

int main()
{
	int number[100];
	int count = 0;
	int x;
	int sum = 0;

	do{
		scanf("%d",&x);
		number[count] = x;
		count ++;
		sum+=x;
	}while(x != -1);
	count--;
	sum+=1;
	if(count>0)
	{
		printf("count = %d\n",count);
		printf("sum = %d\n",sum);
		printf("average = %f\n",(sum*1.0)/count);
		for(int i = 0;i < count;i++)
		{
			if(number[i] > sum*1.0/count)
			{
				printf("%d ",number[i]);
			}
		}
	}
	return 0;
}






