#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define CAP 5

bool enqueue(int);
int dequeue();
bool enqueueAtB(int);
int dequeueAtE();
int peek();
bool isFull();
bool isEmpty();
void showAll();

int queue[CAP];
int f = -1;
int r = -1;

void queueMenu(){
    int ch=1;
    while(ch){
        printf("--------------> Enter Your Choice <---------------\n\n");    
		printf("==> 1, For Enqueue.\n");
        printf("==> 2, For Dequeue.\n");
        printf("==> 3, For Enqueue At Begin.\n");
        printf("==> 4, For Dequeue At End.\n");
        printf("==> 5, For Check Queue is Empty or Not.\n");
        printf("==> 6, For Check Queue is Full or Not.\n");
        printf("==> 7, For Show All The Values.\n");
		printf("==> 8, For Show Peek Value.\n");
        printf("==> 9, For Exit.\n");
        
		printf("\n---------------------------------------------------\n");

        int op,val;    
        scanf("%d",&op);

        switch(op){
            case 1:{
                printf("\n\n Enter The Value For Insert : ");
                scanf("%d",&val);
				printf("\n\n");
                if(enqueue(val))
                printf("%d Inserted \n",val);

				printf("\n\n");
            break;    
            }
            case 2:{
                val = dequeue();
				printf("\n\n");
                if(val!=-1)printf("Dequeue %d\n",val);
				printf("\n\n");
            break;    
            }

            case 3:{
                printf("\n\n Enter The Value For Insert : ");
                scanf("%d",&val);
				printf("\n\n");
                if(enqueueAtB(val))
                printf("%d Inserted \n",val);

				printf("\n\n");
            break;    
            }
            case 4:{
                val = dequeueAtE();
				printf("\n\n");
                if(val!=-1)printf("Dequeue %d\n",val);
				printf("\n\n");
            break;    
            }

            case 5:{
                 printf("%s ",(isEmpty())?"true":"false");
				 printf("\n\n");
            break;    
            }
            case 6:{
                 printf("%s ",(isFull())?"true":"false");
                 printf("\n\n");
            break;    
            }
            case 7:{
                showAll();
            break;    
            }

            case 8:{
                val = peek();
				printf("\n\n");
                if(val!=-1)printf("Peek %d\n",val);
				printf("\n\n");
            break;    
            }
            case 9:{
                printf("\n\n--------------> Thank You For Using Application <---------------\n\n");
                return;
            }
            default : {
				//return; 				
            }

        }

        
        printf("Enter '1' for More opration '0' for End : ");
        scanf("%d",&ch);
		if(ch == 0)
			printf("\n\n--------------> Thank You For Using Application <---------------\n\n");
    }
    
}

void main(){
queueMenu();

}

            

bool enqueue(int x){
if(isFull()){
    printf("Queue is Full.\n");
    return false;
}
if(f==-1)f++;
queue[++r]=x;
return true;
}

int dequeue(){
    if(isEmpty()){
    printf("Queue is Empty.\n");
    return -1;
    }
    return queue[f++];
}

int peek(){
        if(isEmpty()){
    printf("Queue is Empty.\n");
    return -1;
    }
    return queue[f];

}
bool isFull(){
    if(r==CAP-1)return true;
    return false;
}
bool isEmpty(){
    if(f==-1|| f>r)return true;
    return false;
}
void showAll(){
    for(int i=f;i<=r;i++){
        printf("%d ",queue[i]);
    }
    printf("\n\n");
}

bool enqueueAtB(int x){
if(f>0){
    queue[--f]=x;
return true;
}
else{
    printf("Queue is Full From Back Side.\n");
    return false;    
}
}
int dequeueAtE(){
    if(r>=f && r!=-1){
        return queue[r--];
    }
    else{
    printf("Queue is Empty From Back Side.\n");
    return -1;        
    }
}
