// WAP to implement doubly linked list to perform the following task:

// !!!!!MINOR BUGS!!!!!!!!!!!

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node{
	int data;
	struct node* prev;
	struct node* next;
};

struct node* getnode(struct node* newnode){
	int item;
	printf("Enter element ");
	scanf("%d", &item);
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = item;
	return newnode;
}

struct node* insert_at_begin(struct node* header, struct node* trailer, struct node* newnode){
	if(header == NULL){
		newnode->prev = NULL;
		newnode->next = NULL;
		header = newnode;
		trailer = newnode;
	} else {
		newnode->prev = NULL;
		newnode->next = header;
		header->prev = newnode;
		header = newnode;
	}
	return header;
}

struct node* insert_at_end(struct node* header, struct node* trailer, struct node* newnode){
	if(header==NULL){
		newnode->prev = NULL;
		newnode->next = NULL;
		header = newnode;
		trailer = newnode;
	} else {
		newnode->next = NULL;
		newnode->prev = trailer;
		trailer->next=newnode;
		trailer = newnode;
	}
	return header;
}

struct node* insert_at_position(struct node* header, struct node* trailer, struct node* newnode){
	int p;
	struct node* temp = header;
	printf("Enter position ");
	scanf("%d", &p);
	if(header == NULL){
		newnode->prev = NULL;
		newnode->next = NULL;
		header = newnode;
		trailer = newnode;
	} else {
		for(int i=1;i<=p-1;i++){
			temp = temp->next;
		}
		newnode->next=temp->next;
		newnode->prev=temp;
	}
	return newnode;
}

struct node* delete_at_begin(struct node* header, struct node* trailer){
	struct node* temp = header;
	if(header == NULL){
		printf("Empty List\n");
	} else {
		header = header->next;
		header->prev = NULL;
	}
	free(temp);
	return header;
}

struct node* delete_at_end(struct node* header, struct node* trailer){
	struct node* temp = trailer;
	if(trailer == NULL){
		printf("Empty List\n");
	} else {
		trailer = trailer->prev;
		trailer->next = NULL;
	}
	free(temp);
	return header;
}

struct node* delete_at_position(struct node* header, struct node* trailer){
	int p, data;
	struct node* temp = header;
	struct node* hold, *temp2;
	printf("Enter position ");
	scanf("%d", &p);
	if(header == NULL){
		printf("Empty List\n");
	} else {
		for(int i=1;i<=p-1;i++){
			temp = temp->next;
		}
		data=temp->data;
		if(temp->prev != NULL){
			hold = temp->next;
			temp2 = temp->prev;
			temp2->next = hold;
		} else if(temp->next==NULL){
			delete_at_end(header, trailer);
		}else {
			delete_at_begin(header, trailer);
		}
		printf("Deleted %d at position %d\n", data, p);
	}
	free(temp);
	return header;
}

struct node* track_lastnode(struct node *header,struct node *trailer)
{
    struct node *temp = header;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	trailer = temp;
  return trailer;
}

void display_forward(struct node* header){
	struct node* temp = header;
	while(temp != NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

void display_backward(struct node* trailer){
	struct node* temp = trailer;
	while(temp!=NULL){
		printf("%d->", temp->data);
		temp = temp->prev;
	}
	printf("NULL\n");
}

bool search(struct node* header, int item){
	if(header==NULL){
		printf("Empty List\n");
	}
	struct node* temp = header;
	while(temp->next!=NULL){
		if(temp->data==item) return true;
		temp = temp->next;
	}
	return  false;
}

int main(){
	struct node* header = NULL, *trailer=NULL, *newnode;
	int ch, item;
	while(1){
		printf("1.Insert node at beginning\n2.Insert node at end\n3.Insert node at specified position\n");
		printf("4.Delete node at beginning\n5.Delete node at end\n6.Delete node at specified position\n");
		printf("7.Forward Display\n8.Backward Display\n9.Search element\n10.Exit\n");

		printf("Choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				newnode = getnode(newnode);
				header = insert_at_begin(header, trailer, newnode);
				trailer = track_lastnode(header, trailer);
				break;
			case 2:
				newnode = getnode(newnode);
				header = insert_at_end(header, trailer, newnode);
				trailer = track_lastnode(header, trailer);
				break;
			case 3:
				newnode = getnode(newnode);
				header = insert_at_position(header, trailer, newnode);
				trailer = track_lastnode(header, trailer);
				break;
			case 4:
				trailer = track_lastnode(header, trailer);
				header = delete_at_begin(header, trailer);
				break;
			case 5:
				trailer = track_lastnode(header, trailer);
				header = delete_at_end(header, trailer);
				break;
			case 6:
				trailer = track_lastnode(header, trailer);
				header = delete_at_position(header, trailer);
				break;
			case 7:
				display_forward(header);
				break;
			case 8:
				display_backward(trailer);
				break;
			case 9:
				printf("Search element ");
				scanf("%d",&item);
				if(search(header, item)){
					printf("Found %d\n", item);
				} else {
					printf("Item %d not found\n", item);
				}
				break;
			case 10:
				exit(0);
				break;
			default:
				printf("Invalid choice");
		}
	}
}