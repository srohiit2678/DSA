#include<stdio.h>
#include<stdlib.h>

void insertAtBegin(int);
void insertAtEnd(int);
void showAll();

struct Node{
int data;
struct Node * next;
struct Node * prev;
};
struct Node *start = NULL;


void main(){
    insertAtBegin(10);
    insertAtBegin(20);
    insertAtBegin(30);    
    insertAtBegin(40);
	insertAtEnd(50);
	showAll();

}


void insertAtBegin(int x)
{
    struct Node *temp = malloc(sizeof(struct Node));
    if(temp==NULL){
        printf("No Space....\n");
		return;
    }
    temp -> data = x;
    temp -> prev = NULL;
    temp -> next = start;
    if(start != NULL) start -> prev = temp;
	start = temp;		
}

 void insertAtEnd(int x)
{
    if(start == NULL){
        insertAtBegin(x);
        return;
    }
struct Node * temp1 = start;
    while(temp1->next != NULL){
        temp1 = temp1 -> next;
    }    

    struct Node * temp = malloc(sizeof(struct Node));
    
    temp -> data = x;
    temp -> next = NULL;
    temp -> prev = temp1;
    temp1 -> next = temp;

}

void showAll(){
    struct Node *temp = start;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}