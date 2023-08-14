#include <stdio.h>
int main()
{
	int a;
	printf("enter a value: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("number is positive");
	}
	else if(a==0)
	{
		printf("number is neather positiye nor negative");
	}
	else{
		printf("number is negetive");
	}
	return 0;
}
