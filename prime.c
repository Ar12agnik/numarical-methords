#include <stdio.h>
int main(){
	int a,i=0,flag=0;
	printf("enter a number");
	scanf("%d",&a);
	for (i=2;i<a;i++){
		if(a%i==0){
			printf("not a prime number!");
			flag=1;
			break;
		}
	}
	if (flag==0){
		printf("prime number!");
	}
	return 0;
}
