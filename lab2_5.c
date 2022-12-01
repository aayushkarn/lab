// WAP to perform the multiplication to two natural numbers

#include<stdio.h>

int product(int x, int y){
	if(x==1){
		return y;
	} else if (y==1){
		return x;
	} else {
		return (x+product(x, y-1));
	}
}

int main(){
	int x, y;
	printf("Enter x, y ");
	scanf("%d %d", &x, &y);
	printf("Product %d ", product(x, y));
}