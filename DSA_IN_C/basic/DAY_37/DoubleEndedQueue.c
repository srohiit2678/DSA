#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define CAP 5
 
int queue[CAP];
int f = -1;
int r = -1;

void enqueue(int);
int dequeue();
void enqueueAtBegin(int);
int dequeueAtEnd();
bool isEmpty();
bool isFull();
void display();

void main(){
    enqueue(10);
    enqueue(10);
    enqueue(10);
    enqueue(10);
    enqueue(10);
    enqueue(10);

    display();
    printf("\n%d  %d\n",f,r);
    dequeue();
    dequeue();
    dequeue();
    printf("\n%d  %d\n",f,r);
    printf("\n");
    display();
    dequeueAtEnd();
    dequeueAtEnd();
    printf("\n%d  %d\n",f,r);
    printf("\n");
    display();
enqueueAtBegin(50);
enqueueAtBegin(50);
enqueueAtBegin(50);
enqueueAtBegin(50);
    printf("\n%d  %d\n",f,r);
    printf("\n");
    display();
enqueue(60);                                
enqueue(60);
    printf("\n%d  %d\n",f,r);
    printf("\n");
    display();
    printf("\n%d  %d\n",f,r);

    printf("\n");

}

void enqueue(int x){
  if(isFull()){
    printf("Full\n");
    return;
    }
    if(f==-1)f++;
    queue[++r] = x;
}

int dequeue(){
    if(isEmpty()){
        printf("Empty\n");
        return -1;
    }
    return queue[f++];
}

void enqueueAtBegin(int x){
    if(f<0){
        printf("FULL B..\n");    
        return;
    }
    queue[--f] = x;
  }

int dequeueAtEnd(){
if(r<f || r==-1){
    printf("Empty E...\n");
    return -1;
}
return queue[r--];
}

bool isEmpty(){
    if(f==-1 || f>r)return true;
    return false;
}
bool isFull(){
    if(r==CAP-1)return true;
    return false;
}

void display(){
    for(int i=f;i<=r;i++){
    printf("%d ",queue[i]);
    }
}
