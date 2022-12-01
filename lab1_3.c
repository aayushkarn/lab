// WAP to evaluate postfix expression
// EXPONENT-->$ not included

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

struct Stack{
	int top;
	int data[SIZE];
};

void createEmptyStack(struct Stack *S){
	S->top = -1;
}

void push(struct Stack* S, char item){
	if(S->top==SIZE-1){
		printf("Stack Overflow");
	} else {
		S->top = S->top + 1;
		S->data[S->top] = item;
	}
}

char pop(struct Stack* S){
	if(S->top == -1){
		printf("Stack Underflow");
		return -1;
	} else {
		char temp = S->data[S->top];
		S->top = S->top - 1;
		return temp;
	}
}

int main(){	
	struct Stack* S = (struct Stack*)malloc(sizeof(struct Stack));
	createEmptyStack(S);

	char exp[SIZE];
	char x, *e;
	printf("Enter Expression: ");
	scanf("%s", exp);

	e = exp;

	while(*e != '\0'){
		if(isdigit(*e)){
			push(S, *e-'0');
		} else {
			int a = pop(S);
			int b = pop(S);
			switch(*e){
				case '+':
					push(S, b+a);
					break;
				case '-':
					push(S, b-a);
					break;
				case '*':
					push(S, b*a);
					break;
				case '/':
					push(S, b/a);
					break;
			}
		}
		e++;
	}
	printf("Result: %d", pop(S));
	return 0;
}