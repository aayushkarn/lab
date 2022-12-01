// WAP to find the sum of n natural numbers

#include<stdio.h>

int sum(int n){
	if (n == 0) {
		return n;
	}
	return n + sum(n-1);
}

int main(){
	int n;
	printf("Enter number ");
	scanf("%d", &n);

	printf("Sum is %d", sum(n));
	return 0;
}