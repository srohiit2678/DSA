#include<stdio.h>
#include<stdlib.h>

void insertAtBigin(int);
void showAllV();
void insertAtEnd(int);
int countNode();
void insertAtPosition(int,int);
void deleteAtBigin();
struct Node{
int data;
struct Node *next;
};
struct Node *start = NULL;


void main(){
    showAllV();
    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");
    insertAtBigin(10);
    insertAtBigin(20);
    insertAtBigin(30);
    insertAtBigin(40);
    insertAtBigin(50);
    insertAtBigin(60);

    showAllV();
    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");
    insertAtEnd(70);
    insertAtEnd(80);
    insertAtEnd(90);
    insertAtEnd(100);
    insertAtEnd(110);
    insertAtEnd(120);     
    showAllV();
    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");
    insertAtPosition(1,65);
    insertAtPosition(3,55);
    insertAtPosition(5,45);
    insertAtPosition(7,35);
    insertAtPosition(9,25);
    insertAtPosition(11,15);
    showAllV();
    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");
    deleteAtBigin();
    deleteAtBigin();
    deleteAtBigin();
    showAllV();
    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

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

void showAllV(){
    if(start==NULL)printf("Empty List...\n");

    struct Node *temp = start;
    while(temp!= NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    } 
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

int countNode(){
 int c =0;
 struct Node *temp = start;
    while(temp!= NULL){
        c++;
        temp = temp->next;
    }   
    return c;
}

void insertAtPosition(int p,int x){

    if(p<=1){
        insertAtBigin(x);
        return;
    }
    if(p>countNode()){
         insertAtEnd(x);
         return;
    }
    struct Node *temp1 = start;
    for(int i=1;i<p-1;i++){
        temp1 = temp1->next;
    }

    struct Node *temp = malloc(sizeof(struct Node));
      
    temp -> data = x;
    temp -> next = temp1 ->next;
    temp1 ->next = temp;
}

void deleteAtBigin(){
    if(start==NULL){
        printf("Empty List....\n");
        return;
    }
    
    struct Node *temp = start;
    start = start -> next;
    free(temp);   
}