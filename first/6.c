#include<stdio.h>

int main()
{
	int a[][3] = {{0},{1},{2}};
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
