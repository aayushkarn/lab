// WAP to implement stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *push(struct stack *top,int item)
{
	struct stack *newnode;
	newnode = (struct stack*)malloc(sizeof(struct stack));
	printf("Enter the element\n");
	scanf("%d",&item);
	newnode->data = item;
	if(top==NULL)
	{
 		newnode->next=NULL;
        top = newnode;
	}
	else
	{
		newnode->next = top;
		top = newnode;
	}
	return top;
}
struct stack *pop(struct stack *top)
{
	struct stack *temp = top;
	if(top==NULL)
	{
		printf("\n\nSTACK UNDERFLOW\n\n");
	}
	else
	{
		top = temp->next;
		printf("The Item Removed is %d\n",temp->data);
		free(temp);
	}
	return top;
}
void top_element(struct stack *top)
{
    if(top==NULL)
	{
		printf("\n\nEMPTY STACK\n\n");
	}
	else
	{
		printf("The Top Element is %d\n",top->data);
 	}
}
void display(struct stack *top)
{
	struct stack *temp = top;
	if (top==NULL)
	{
        printf("\n\nEMPTY STACK\n\n");
	}
	else
	{
        while(temp!=NULL)
		{
			printf("%d   ",temp->data);
			temp=temp->next;
		}
		printf("\n\n");
	}
	
}
int ch,i,item;
void main()
{
	struct stack *top=NULL;
	while(1)
	{
		printf("MENU\n");
		printf("1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:

				top = push(top,item);
			break;
			case 2:
				top = pop(top);
			break;
			case 3:
				top_element(top);
			break;
				case 4:
					display(top);
			break;
			case 5:
				exit(0);
			break;
			default:
				printf("Invalid Option\n");
		}
	}
}
