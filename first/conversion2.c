#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	int fahr = 0;
	printf("华氏温度\t摄氏温度\n");
	for(fahr = UPPER;fahr >= LOWER;fahr-=STEP)
	{
		printf("%3d\t\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
	}
}
