#include<stdio.h>



int main(int argc,char* argv[])
{
	int Amount = 0;
	printf("请输入金额（元）：");
	int price = 0;
	scanf("%d",&price);
	
	printf("请输入票面（元）：");
	scanf("%d",&Amount);

	int change = Amount - price;

	printf("找您%d元。\n",change);
}

