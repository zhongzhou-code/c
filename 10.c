#include<stdio.h>

int main()
{
	int num[] = {12,56,1,2,3,4,5,6,7,8,9,9};
	int length = sizeof(num)/sizeof(num[0]);
	
	for(int i = 0;i < length;i++)
	{
		printf("%p\n",&num[i]);
	}
	printf("-------------------------\n");
	char ch[][3] = {	{'a','b','c'},
					{'d','e','f'},
					{'g','h','i'} };
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			printf("%p\t",&ch[i][j]);
		}
		printf("\n");
	}
	return 0;
}




