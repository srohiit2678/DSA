#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *top=NULL;
struct Node* cNode(int);

void push(int);
int pop();
int peek();
bool isEmpty();

void main(){
 push(10);
 push(20);
 push(30);
 printf("%d \n",pop());
 printf("%d \n",peek());
 printf("%d \n",pop());
 printf("%d \n",peek());

 printf("%s \n",isEmpty()?"true":"false");
}

struct Node* cNode(int x){
 struct Node* temp = (struct Node* )malloc(sizeof(struct Node));
 if(temp==NULL){
    printf("no space\n");
    return temp;
 }
 temp -> data = x;
 return temp;
}

void push(int x){
struct Node* temp = (struct Node* )cNode(x);
if(temp==NULL)return;
temp->next=top;
top = temp;
}



int pop(){
    int popVal= top->data;
    struct Node* temp = top;
    top = top->next;
    free(temp);
    return popVal;
}
int peek(){
    if(top==NULL)return -1;
    return top->data;
}
bool isEmpty(){
    if(top==NULL)return true;
    return false;
}
