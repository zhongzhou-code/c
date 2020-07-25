#include<stdio.h>

int main(int argc,char* argv[])
{
	int num = 0;
	int a = 0,b = 0,c = 0;
	printf("请输入一个三位的整数：");
	scanf("%d",&num);

	a = num/100;
	b = (num%100)/10;
	c = num%10;
	printf("逆序：%d\n",c*100+b*10+a);
	return 0;
}
