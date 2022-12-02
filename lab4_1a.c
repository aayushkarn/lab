// WAP to implement linear linked list to perform the following task:
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
	int data;
	struct node* next;
};

struct node* getnode(struct node* newnode){
	int item;
	newnode = (struct node*)malloc(sizeof(struct node*));
	printf("Enter Data ");
	scanf("%d", &item);
	newnode->data = item;
	return newnode;
}

struct node* insert_at_begin(struct node* nodeptr, struct node *newnode){
	if(nodeptr == NULL){
		newnode->next=NULL;
		nodeptr = newnode;
	} else {
		newnode->next = nodeptr;
		nodeptr = newnode;
	}
	return nodeptr;
}

struct node* insert_at_end(struct node* nodeptr, struct node* newnode){
	struct node* temp = nodeptr;
	if(nodeptr == NULL){
		newnode->next = NULL;
		nodeptr = newnode;
	} else {
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next = NULL;
	}
	return nodeptr;
}

struct node* insert_at_position(struct node* nodeptr, struct node* newnode){
	struct node* temp = nodeptr;
	int p;
	if(nodeptr == NULL){
		newnode->next = NULL;
		nodeptr = newnode;
	} else {
		printf("Enter Specified position ");
		scanf("%d", &p);
		for(int i=1;i<=p-1;i++){
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return nodeptr;
}

struct node* delete_at_begin(struct node* nodeptr){
	struct node* temp = nodeptr;
	if(nodeptr == NULL){
		printf("Empty List\n");
	} else {
		nodeptr = temp->next;
		free(temp);
	}
	return nodeptr;
}

struct node* delete_at_end(struct node* nodeptr){
	struct node* temp = nodeptr;
	struct node* hold;
	if(temp == NULL){
		printf("Empty List\n");
	} else if(temp->next==NULL){
		hold = temp;
		nodeptr = NULL;
		free(hold);
	} else {
		while(temp->next != NULL){
			hold = temp;
			temp = temp->next;
		}
		hold->next = NULL;
		free(temp);

	}

}

struct node* delete_at_position(struct node* nodeptr){
	struct node* temp = nodeptr;
	int p;
	struct node* hold;
	if(temp==NULL){
		printf("Empty List");	
	} else {
		printf("Enter The Postion of the Node to be Deleted ");
		scanf("%d",&p);
	    for(int i=1;i<p-1;i++)
		{
			temp=temp->next;
		}
 		hold=temp->next;
	    temp->next = hold->next;
		free(hold);
	}
	return nodeptr;
}

void display(struct node* nodeptr){
	struct node* temp = nodeptr;
	int count=0;
	printf("Linked List\n");
	while(temp != NULL){
		printf("%d->",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL\n");
	printf("Total node %d\n",count);
}

bool search(struct node* nodeptr, struct node* newnode, int item){
	struct node* temp = nodeptr;
	if(nodeptr == NULL){
		newnode->next = NULL;
		nodeptr = newnode;
	} else {
		while(temp!=NULL){
			if(temp->data == item) return true;
			temp = temp->next;
		}
	}
	return false;
}

int main(){
	struct node* nodeptr=NULL, *newnode;
	int ch;
	int item;
	while(1){
		printf("1.Insert node at beginning\n2.Insert node at end\n3.Insert node at specified position\n");
		printf("4.Delete node at beginning\n5.Delete node at end\n6.Delete node at specified position\n");
		printf("7.Display Data\n8.Search element\n9.Exit\n");

		printf("Choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				newnode = getnode(newnode);
				nodeptr = insert_at_begin(nodeptr, newnode);
				break;
			case 2:
				newnode = getnode(newnode);
				nodeptr = insert_at_end(nodeptr, newnode);
				break;
			case 3:
				newnode = getnode(newnode);
				nodeptr = insert_at_position(nodeptr, newnode);
				break;
			case 4:
				nodeptr = delete_at_begin(nodeptr);
				break;
			case 5:
				nodeptr = delete_at_end(nodeptr);
				break;
			case 6:
				nodeptr = delete_at_position(nodeptr);
				break;
			case 7:
				display(nodeptr);
				break;
			case 8:
				printf("Search element ");
				scanf("%d",&item);
				if(search(nodeptr, newnode, item)){
					printf("Found %d\n", item);
				} else {
					printf("Item %d not found\n", item);
				}
				break;
			case 9:
				exit(0);
				break;
			default:		
				printf("Invalid choice");
		}
	}
}