#include<stdio.h>

int main()
{
	//初始化
	int price = 0;
	int bill = 0;
	//输入金额和票面
	printf("请输入金额:");
	scanf("%d",&price);
	printf("请输入票面:");
	scanf("%d",&bill);
	//计算找零
	if(bill >= price){
		printf("应该找您：%d元\n",bill-price);
	}else{
		printf("您给的钱不够！\n");
	}
	return 0;
}
