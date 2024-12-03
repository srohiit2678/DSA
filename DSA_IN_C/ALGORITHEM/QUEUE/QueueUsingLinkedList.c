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
    if(f){  // f==NULL
        printf(" Queue is Empty");
        return;
    }
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
