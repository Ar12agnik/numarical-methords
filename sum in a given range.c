#include <stdio.h>
/*int main(){
	int a,b,i,sum;
	printf("enter the start value: ");
	scanf("%d",&a);
	printf("enter the end value: ");
	scanf("%d",&b);
	sum=0;
	for(i=a;i<=b;i++){
		sum=sum+i;
		printf("the sum is %d",&sum);			
	}
	printf("the sum is %d",sum);
	return 0;
}*/
#include <stdio.h>

int main() {
    int a, b, i, sum;

    printf("enter the start value: ");
    scanf("%d", &a);
    printf("enter the end value: ");
    scanf("%d", &b);

    sum = 0;
    i=a;
    for (i = a; i <= b; i++) {
        sum += i;
    }

    printf("the sum hhhh is %d", sum);

    return 0;
}

