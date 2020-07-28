#include<stdio.h>

int main()
{
	int num = 0;
	scanf("%d",&num);

	for(int i = 2;i<=num;i++)
	{
		int isPrime = 1;
		for(int k = 2;k < i;k++){
			if(i%k==0||i==2)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
