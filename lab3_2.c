// WAP to implement circular queue
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct queue{
	int data[SIZE];
	int front;
	int rear;
};

void makeEmpty(struct queue* Q){
	Q->front = -1;
	Q->rear = -1;
}

int isEmpty(struct queue* Q){
	if(Q->front == -1){
		return 1;
	}
	return 0;
}

int isFull(struct queue* Q){
	if((Q->front == (Q->rear+1)) || (Q->front == 0 && Q->rear == SIZE-1)){
		return 1;
	} else{
		return 0;
	}
}

void enqueue(struct queue* Q, int item){
	if(isFull(Q)){
		printf("Queue FULL\n");
	} else {
		if(Q->front == -1) Q->front=0;
		Q->rear = (Q->rear+1)%SIZE;
		Q->data[Q->rear] = item;
		printf("Enqueued %d\n", item);
	}
}

void dequeue(struct queue* Q){
	int temp;
	if(isEmpty(Q)){
		printf("Queue Empty\n");
	} else {
		temp = Q->data[Q->front];
		if(Q->front == Q->rear){
			Q->front=-1;
			Q->rear=-1;
		} else {
			Q->front = (Q->front+1)%SIZE;
		}
		printf("Deleted %d\n",temp);
	}
}

void display(struct queue* Q){
	int i;
	if(isEmpty(Q)){
		printf("Queue Empty\n");
	} else {
		printf("Queue: \n");
		for(i=Q->front;i != Q->rear; i = (i+1)%SIZE){
			printf("%d->", Q->data[i]);
		}
		printf("%d->",Q->data[i]);
	}
	printf("\n");
}

int main(){
	struct queue* Q = (struct queue*)malloc(sizeof(struct queue));
	makeEmpty(Q);

	int ch, x;

	while(1){
		printf("1.Enqueue\n2.DeQueue\n3.Display\n4.Exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("Enter Item ");
				scanf("%d", &x);
				enqueue(Q, x);
				break;
			case 2:
				dequeue(Q);
				break;
			case 3:
				display(Q);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid choice\n");
		}
	}

	return 0;
}
