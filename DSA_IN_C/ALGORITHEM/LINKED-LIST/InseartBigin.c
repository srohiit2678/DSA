#include<stdio.h>
#include<stdlib.h>
void insertAtBigin(int);
void showAllV();

struct Node{
int data;
struct Node *next;
};

struct Node *start = NULL;

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

void showAllV(){
    struct Node *temp = start;
    if(temp==NULL)printf("Empty List...\n");
    while(temp!= NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    } 
}
void main(){
    showAllV();
    insertAtBigin(10);
    insertAtBigin(20);
    insertAtBigin(30);
    insertAtBigin(40);
    insertAtBigin(50);
    insertAtBigin(60);
    showAllV();
}