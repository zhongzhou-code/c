#include<stdio.h>

#define MINOR 35

int main()
{
	//初始化
	int age = 0;
	//输入年龄
	printf("请输入您的年龄:");
	scanf("%d",&age);
	//判断年龄
	printf("您的年龄是%d岁。\n",age);
	if(age < MINOR){
		printf("年轻是美好的，");
	}
	printf("年龄决定您的精神世界，好好珍惜吧！\n");
}
