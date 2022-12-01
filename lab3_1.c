// WAP to implement linear queue

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

struct queue{
	int data[SIZE];
	int front;
	int rear;	
};

void makeEmpty(struct queue* Q){
	Q->front=0;
	Q->rear=-1;
}

int isEmpty(struct queue* Q){
	if(Q->rear<Q->front){
		return 1;
	} else {
		return 0;
	}
}

int isFull(struct queue* Q){
	if(Q->rear==SIZE-1){
		return 1;
	} else {
		return 0;
	}
}

void enqueue(struct queue* Q, int item){
	if(isFull(Q)){
		printf("Queue Full\n");
	} else {
		Q->rear = Q->rear + 1;
		Q->data[Q->rear] = item;
	}
}

void dequeue(struct queue* Q){
	if(isEmpty(Q)){
		printf("Queue Empty\n");
	} else{
		printf("Deleted %d \n", Q->data[Q->front]);
		Q->front = Q->front+1;
	}
}

void display(struct queue* Q){
	if(isEmpty(Q)){
		printf("Queue Empty\n");
	} else {
		for(int i=Q->front; i<=Q->rear;i++){
			printf("%d->",Q->data[i]);
		}
		printf("\n");
	}
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
