#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	char ch[100];
	int length = 0;
	do{
		scanf("%s",ch);
		length = strlen(ch);
		if(ch[length-1] != '.'){
			printf("%d ",length);
		}else{
			printf("%d",length-1);
		}
		
	}while(ch[length-1]!='.');

	return 0;
}



