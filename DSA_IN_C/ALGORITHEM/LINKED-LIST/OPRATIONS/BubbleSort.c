#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node *start = NULL;
struct Node * cNode(int);
void insertAtBegin(int);
void bubbleSort(struct Node*);

void main(){
insertAtBegin(10);
insertAtBegin(20);
insertAtBegin(30);
insertAtBegin(40);
insertAtBegin(50);
showAll();
        bubbleSort(start);
showAll();

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

void bubbleSort(struct Node* temp){
    struct Node* i,*end = NULL;
while(end != temp->next){
i = temp;
while(i->next != end){
    if(i->data > i->next->data){
        int t = i -> data;
        i -> data = i ->next->data;
        i -> next-> data = t;
    }
    i = i->next;
}
end = i;
}
}