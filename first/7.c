#include<stdio.h>

int main()
{
	int n;
	int a[100][100]={0};
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	int row[100] = {0};
	//找出每行最大的数字位置
	for(int i = 0;i<n;i++){
		int max = a[i][0];
		int j;
		for(j = 0;j < n;j++){
			if(max < a[i][j]){
				max = a[i][j];
				row[i] = j;
			}
		}
	}

	for(int i = 0;i<n;i++){
		printf("%d ",row[i]);
	}
	printf("\n");
	int col[100] = {0};
	//找出每列最小的数字位置
	for(int j = 0;j<n;j++){
		int min = a[0][j];
		int i;
		for(i = 0;i<n;i++){
			if(min > a[i][j]){
				min = a[i][j];
				col[j] = i;
			}
		}
	}

	for(int i = 0;i<n;i++)
	{
		printf("%d ",col[i]);
	}
	printf("\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(a[i][row[i]] == a[col[j]][j]){
				printf("%d %d\n",col[j],row[i]);
			}
		}	
	}	
	return 0;
}








