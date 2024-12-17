#include<stdio.h>

struct Node{
int data;
struct Node *next;
};
struct Node *start = NULL;
struct Node* createNode(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
return temp;
}
void insertAtE(int x);
struct Node* revList(struct Node *);
void showAll(struct Node*);
void main(){
insertAtE(10);
insertAtE(20);
insertAtE(30);
insertAtE(40);
insertAtE(50);
insertAtE(60);
showAll(start);
start = revList(start);
showAll(start);
}
void insertAtE(int x){
    struct Node *temp = createNode(x);
    if(start == NULL){
        start = temp;
    }
    else{
    struct Node *temp1 = start;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    } 
    temp1->next = temp;        
    }
}

void showAll(struct Node* temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
struct Node* revList(struct Node *current){
struct Node *frant = NULL;
struct Node *prev = NULL;
while(current!=NULL){
frant = current->next;
current->next = prev;
prev = current;
current = frant; 
} 
return prev;
}