#include <stdio.h>
int main()
{
	int a,b,c;
	float avg;
	printf("enter a number: ");
	scanf("%d",&a);
	printf("enter another  number: ");
	scanf("%d",&b);
	printf("enter another number: ");
	scanf("%d",&c);
	avg=(a+b+c)/3;
	printf("The avg is %f",avg);
	return 0;
}
