// WAP to convert infix expression to postfix expression
// EXPONENT-->$ not included


#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define SIZE 10

struct Stack{
	int top;
	char data[SIZE];
};

void createEmptyStack(struct Stack* s){
	s->top = -1;
}

void push(struct Stack* s, char item){
	if(s->top==SIZE-1){
		printf("Stack Overflow");
	} else {
		s->top = s->top + 1;
		s->data[s->top] = item;
	}
}

char pop(struct Stack* S){
	if(S->top==-1){
		printf("Stack Underflow");
		return -1;
	} else {
		char temp = S->data[S->top];
		S->top = S->top - 1;
		return temp;
	}
}

int precedence(char x){
	if(x == '('){
		return 0;
	}
	else if(x == '+' || x == '-'){
		return 1;
	}
	else if(x == '*' || x == '/'){
		return 2;
	}
	return 0;
}

int main(){
	struct Stack* S = (struct Stack*)malloc(sizeof(struct Stack));
	createEmptyStack(S);

	char exp[SIZE];
	char x, *e;

	printf("Enter Expression ");
	scanf("%s", exp);

	e = exp;

	while(*e != '\0'){
		if(isalnum(*e)){
			printf("%c ", *e);
		} 
		else if(*e == '('){
			push(S, *e);
		}
		else if(*e == ')'){
			while((x=pop(S)) != '('){
				printf("%c ", x);
			}
		} 
		else {
			while(precedence(S->data[S->top]) >= precedence(*e)){
				printf("%c ", pop(S));
			}
			push(S, *e);
		}
		e++;
	}

	while(S->top != -1){
		printf("%c", pop(S));
	}

	return 0;
}