#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *start = NULL;

struct Node* cNode(int);
void insertAtB(int);
void insertAtE(int);
void showAll();
struct Node* reverse(struct Node*);
struct Node* reverse2(struct Node*);
int main(){
    insertAtE(10);
    insertAtE(20);
    insertAtE(30);
    insertAtE(40);
    insertAtE(50);
    showAll();
   start = reverse2(start);
    showAll();
return 0;
}

struct Node* cNode(int x){
struct Node* temp = (struct Node*)malloc(sizeof(struct  Node));
if(temp == NULL){
    printf("NO....Space\n");
    return temp;
}
temp ->data=x;
return temp;
}

void insertAtB(int x){
struct Node* temp = cNode(x);
temp ->next = start;
start = temp;
}


void insertAtE(int x){
if(start==NULL){
    insertAtB(x);
    return;
}

struct Node* temp1 = start;
while(temp1->next!=NULL){
temp1=temp1->next;
} 

struct Node* temp = cNode(x);
temp ->next = NULL;
temp1 ->next = temp;
}


void showAll(){
    if(start==NULL)printf("Empty List...\n");
    printf("\n\n");
    struct Node *temp = start;
    while(temp!= NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    } 
}

struct Node* reverse(struct Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct Node* newHead = reverse(head->next); 
    struct Node* frant = head->next;
    frant ->next= head;
    head ->next = NULL;
    return newHead;
}


struct Node* reverse2(struct Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    struct Node* frant ; 
    while(temp!=NULL){
        frant = temp->next;
        temp->next = prev;
        prev = temp;
        temp = frant;
    }
    return prev;
}