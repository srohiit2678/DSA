#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};


void insertAtBigin(int);
void showAllV();
void insertAtEnd(int);
int searchNode(int);
void revDisplay(struct  Node *);

struct Node *start = NULL;
void main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    showAllV();

    printf("\nposition -> %d \n",  searchNode(30) );

    revDisplay(start);

}

void insertAtBigin(int x){
struct Node *temp = malloc(sizeof(struct Node));
if (temp == NULL)
{
    printf(" No space...\n");
    return;
}
temp -> data = x;
temp ->next = start;
start = temp;
}

void insertAtEnd(int x){
if(start==NULL){
    insertAtBigin(x);
    return;
}
struct Node *temp1 = start;
while(temp1->next!=NULL){
    temp1 = temp1->next;
    
}
struct Node *temp = malloc(sizeof(struct Node));
temp->data = x;
temp ->next = NULL;
temp1->next = temp; 
}


void showAllV(){
    if(start==NULL)printf("Empty List...\n");

    struct Node *temp = start;
    while(temp!= NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    } 
}

int searchNode(int x){
    int index = -1;
    if(start==NULL)return index;
    struct  Node *temp = start;
    while(temp!=NULL){
          index++;
      if(temp->data == x){
        return index;
      }
      temp = temp->next;
    }
    return -1;
}

void revDisplay(struct  Node *temp){
  if(temp==NULL)return;
  revDisplay(temp->next);
  printf(" %d ",temp->data);  
}