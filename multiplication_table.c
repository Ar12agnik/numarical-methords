#include<stdio.h>
int main(){
	int a,r,i;
	printf("enter the table value: ");
	scanf("%d",&a);
	for(i=0;i<=12;i++){
		r=a*i;
		printf("%d*%d=%d\n",a,i,r);
	}
	return 0;
}
