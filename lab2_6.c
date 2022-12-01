// WAP to perform a^b where a and b are natural numbers
#include<stdio.h>

int power(int a, int b){
	if(a==1){
		return b;
	}
	if(b==1){
		return a;
	}
	return (a*power(a,b-1));
}

int main(){
	int a, b;
	printf("Enter a, b ");
	scanf("%d %d", &a, &b);

	printf("Result: %d", power(a,b));
}