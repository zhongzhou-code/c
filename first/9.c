#include<stdio.h>

int main()
{
	int i = 0;
	printf("i = %d",i);
	printf("&i = %p\n",&i);
	printf("sizeof(i) = %lu\n",sizeof(i));
	printf("sizeof(&i) = %lu\n",sizeof(&i));
	return 0;
}
