// WAP to find the GCD of two numbers.

#include<stdio.h>

int gcd(int x, int y){
	if(y==0){
		return x;
	} else {
		return gcd(y, x%y);
	}
}

int main(){
	int x, y;
	printf("Enter x ");
	scanf("%d", &x);
	printf("Enter y ");
	scanf("%d", &y);

	printf("GCD %d", gcd(x, y));

	return 0;
}