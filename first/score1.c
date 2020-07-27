#include<stdio.h>

int main()
{
	int score = 0;
	printf("输入成绩:");
	scanf("%d",&score);
	printf("您的等级是:");
	if(score >= 90)
	{
		printf("A\n");
	}
	else if(score >= 80)
	{
		printf("B\n");
	}
	else if(score >= 70){
		printf("C\n");
	}
	else if(score >= 60){
		printf("D\n");
	}
	else
	{
		printf("E\n");
	}
	return 0;
}







