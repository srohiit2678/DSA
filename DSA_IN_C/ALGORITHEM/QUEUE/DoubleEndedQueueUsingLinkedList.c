#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Queue{
int data;
struct Queue *next;
};

struct Queue *f = NULL;
struct Queue *r = NULL;

void enqueue(int);
int dequeue();
void enqueueAtB(int);
int dequeueAtE();
int peek();
bool isEmpty();
void showAll();

void main(){
    printf("%s \n",isEmpty()?"true":"false");
    enqueue(10);
    enqueue(20); 
    enqueue(30); 
    enqueue(40);
    enqueue(50);              
    showAll();
    dequeue();
    showAll();
    printf("%s \n",isEmpty()?"true":"false");
    showAll();
    enqueueAtB(10);
    enqueueAtB(5);
    showAll();
    dequeueAtE();
    showAll();
    dequeueAtE();
    showAll();
}

void enqueue(int x){
struct Queue *temp = (struct Queue*)malloc(sizeof(struct Queue));
temp->data = x;
temp->next = NULL;
if(r==NULL){
f = temp;
r = temp;
}
else{   
r->next=temp;
r=temp;
}
}

int dequeue(){
    struct Queue *temp = f;
    int x = f->data;
    f=f->next;
    free(temp);
    return x;
}

int peek(){
    return f->data;
}

bool isEmpty(){
    if(f==NULL)return true;
    return false;
}


void showAll(){
    for(struct Queue *temp = f;temp!=r->next;temp=temp->next){
        printf("%d ",temp->data);
    }
    printf("\n\n");
}



void enqueueAtB(int x){
struct Queue *temp = (struct Queue*)malloc(sizeof(struct Queue));
temp->data = x;
if(f==NULL){
    f = temp;
    r = temp;
    temp->next = NULL;
}
else{
    temp -> next = f;
    f = temp;
}
}

int dequeueAtE(){
    if(r==NULL)return -1;
    struct Queue *temp = f;
    while(temp->next->next!=NULL)temp=temp->next;
    free(temp->next);
    temp->next = NULL;
}
