#include<stdio.h>

int search(int key,int a[],int length)
{
	int ret = -1;
	for(int i = 0;i < length;i++)
	{
		if(a[i] == key)
		{
			ret = i;
			break;
		}
	}
	return ret;
}

int main()
{
	int a[]={[1]=2,4,[5]=9,[10]=0};
	for(int i = 0;i<11;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("sizeof(a) = %lu字节\n",sizeof(a));
	printf("sizeof(a[0]) = %lu字节\n",sizeof(a[0]));
	printf("length = %d\n",sizeof(a)/sizeof(a[0]));
	int length = sizeof(a)/sizeof(a[0]);
	int x;
	int loc;
	printf("请输入一个数字:");
	scanf("%d",&x);
	loc = search(x,a,length);
	if(loc != -1)
	{
		printf("%d在第%d个位置上面\n",x,loc);
	}else {
		printf("%d不存在\n",x);
	}
	return 0;
}





