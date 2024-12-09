#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};
int decimal = 0,right_shift = 0;
struct Node *start = NULL;
struct Node * cNode(int);
void insertAtBegin(int);
int binaryToDecimal(struct Node* temp);
void main(){
insertAtBegin(1);
insertAtBegin(1);
insertAtBegin(0);
insertAtBegin(0);
insertAtBegin(1);
showAll();
printf("%d",binaryToDecimal(start));
}
int binaryToDecimal(struct Node* temp){
if(temp==NULL)return decimal;
binaryToDecimal(temp->next);
decimal += (temp->data <<right_shift++);
}

struct Node * cNode(int x){
 struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
 if(temp==NULL){
    printf("No... space....\n\n");
    return temp;
 }
 temp->data = x;
 return temp;
}

void insertAtBegin(int x){
    struct Node *temp = cNode(x);
    if(temp==NULL)return;
        temp->next = start;
        start = temp;
}

void showAll(){
    struct Node * temp1 = start;
    while(temp1!=NULL){
        printf("%d ",temp1->data);
        temp1 = temp1->next;
    }
    printf("\n\n");
}
