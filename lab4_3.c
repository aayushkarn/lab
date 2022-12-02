// WAP to implement queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
struct queue *enqueue(struct queue *nodeptr,int item)
{
	struct queue *newnode;
	newnode = (struct queue*)malloc(sizeof(struct queue));
	printf("Enter the element\n");
	scanf("%d",&item);
	newnode->data = item;
	if(nodeptr==NULL)
	{
		newnode->next=NULL;
		nodeptr = newnode;
	}
	else
	{
		struct queue *temp = nodeptr;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
	return nodeptr;
}
struct queue *dequeue(struct queue *nodeptr)
{
	struct queue *temp = nodeptr;
	if(nodeptr==NULL)
	{
		printf("\n\nEMPTY QUEUE\n\n");
	}
	else
	{
		nodeptr = temp->next;
		printf("The Item Removed is %d\n",temp->data);
		free(temp);
	}
	return nodeptr;
}

void display(struct queue *nodeptr)
{
	struct queue *temp = nodeptr;
	if (nodeptr==NULL)
	{
        printf("\n\nEMPTY QUEUE\n\n");
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
int ch,item;
void main()
{
	struct queue *nodeptr=NULL;
	while(1)
	{
		printf("MENU\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:

				nodeptr = enqueue(nodeptr,item);
			break;
			case 2:
				nodeptr = dequeue(nodeptr);
			break;
				case 3:
					display(nodeptr);
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("Invalid Option\n");
		}
	}
}
