// WAP to implement Tower Of Hanoi.

#include<stdio.h>

void TOH(int n, char from, char to, char aux){
	if(n==1){
		printf("Move disk 1 from %c to %c\n", from, to);
	} else {
		TOH(n-1, from, aux, to);
		printf("move disk %d from %c to %c\n",n,from,to);
		TOH(n-1, aux, to, from);
	}
}

int main(){
	int n;
	printf("Enter n Disk ");
	scanf("%d", &n);

	TOH(n, 'A', 'B', 'C');

	return 0;
}