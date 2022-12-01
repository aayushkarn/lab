// WAP to perform array implementation of stack

#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct Stack{
	int top;
	int data[SIZE];
};

void createEmptyStack(struct Stack* S){
	S->top=-1;
}

int isFull(struct Stack* S){
	if(S->top == SIZE-1){
		return 1;
	} else {
		return 0;
	}
}

int isEmpty(struct Stack* S){
	if(S->top == -1){
		return 1;
	} else {
		return 0;
	}
}

void push(struct Stack* S, int item){
	if(isFull(S)){
		printf("Stack Overflow\n");
	} else {
		S->top = S->top + 1;
		S->data[S->top] = item;
		printf("Added %d to Stack\n", item);
	}
}

void pop(struct Stack* S){
	if(isEmpty(S)){
		printf("Stack Underflow");
	} else{
		printf("Deleted item %d\n", S->data[S->top]);
		S->top = S->top-1;
	}
}

void top(struct Stack* S){
	printf("Top Element is %d\n", S->data[S->top]);
}

void display(struct Stack *S){
	printf("Stack: \n");
	if(isEmpty(S)){
		printf("Empty Stack");
	} else {
		for(int i=0;i<=S->top;i++){
			printf("%d->", S->data[i]);
		}
		printf("\n");
	}
}

int main(){
	struct Stack* S;
	int ch, item;

	createEmptyStack(S);

	while(1){
		printf("1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\n");
		scanf("%d", &ch);
		
		switch(ch){
		case 1:
			printf("Enter Element: ");
			scanf("%d", &item);
			push(S, item);
			break;
		case 2:
			pop(S);
			break;
		case 3:
			top(S);
			break;
		case 4:
			display(S);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid choice");
			break;
		}
	}
	return 0;
}