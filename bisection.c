#include<stdio.h>
#include<math.h>
float f(float x){
	return (x*x*x-9*x+1);
}
int main(){
	float accuracy,a,b,c;
	int counter=0;
	printf("Enter the accuracy: ");
	scanf("%f",&accuracy);
	do{
		printf("enter an Interval: ");
		scanf("%f%f",&a,&b);
	}while(f(a)*f(b)>0.0);
	do{
		c=(a+b)/2;
		printf("counter=%d\ta=%f\tb=%fc=%f\tf(c)=%f\n",counter,a,b,c,f(c));
		if (f(a)*f(c)<0.0){
			b=c;
		}else{
			a=c;
		}
		counter=counter+1;
	}while(fabs(f(c))>accuracy);
	printf("root of the equation is %f",c);
	printf("\n%d iterations",counter);
	return 0;
}
