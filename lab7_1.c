// WAP to implement binary search tree (BST)
// DELETE FUNCTION NOT ADDED YET!!!
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* MakeTree(int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

struct node* insert(struct node* root, int data){
	struct node* temp = root;
	if(root==NULL){
		temp = MakeTree(data);
		return temp;
	}
	if(data>temp->data){
		temp->right = insert(temp->right, data);
	} else if(data<temp->data){
		temp->left = insert(temp->left, data);
	}
	return temp;
}

int search(struct node* root, int key){
	if(root!=NULL){
		if(key==root->data){
			return 1;
		} else if(key>root->data){
			root = search(root->right, key);
		} else if(key<root->data){
			root = search(root->left, key);
		}
	} else {
	    return 0;
	}
}

void preorder(struct node* root){
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

void postorder(struct node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

int getData(struct node* root){
    int key,res;
    printf("Search element ");
    scanf("%d",&key);
    res = search(root, key);
    return res;
}

int main(){
	struct node* root;
	root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Preorder Traversal\n");
    preorder(root);
    printf("\n");
    printf("Inorder Traversal\n");
    inorder(root);
    printf("\n");
    printf("Postorder Traversal\n");
    postorder(root);
    printf("\n");

    if(getData(root) == 1){
        printf("Found");
    } else {
        printf("Not found");
    }

	return 0;
}