#include<stdio.h>
#include<string.h>
int main()
{
	char line[] = "Hello";
	printf("strlen = %lu\n",strlen(line));
	printf("sizeof = %lu\n",sizeof(line));
	char s1[] = "abcd";
	char s2[] = "abcd";
	printf("%d\n",strcmp(s1,s2));

	return 0;
}


