#include<stdio.h>

#define PASS 60

int main()
{
	int score = 0;
	printf("请输入成绩:");
	scanf("%d",&score);

	printf("您输入的成绩是%d.\n",score);
	
	if(score < PASS)
	{
		printf("很遗憾，这个成绩没有及格！\n");
	}else{
		printf("祝贺您，这个成绩及格了！\n");
	}
	printf("再见!\n");
	return 0;
}
