

#include<stdio.h>
#include<stdlib.h>

void insertAtBigin(int);
void showAll();
void showAllForword(int);
void showAllBackword(int);
void insertAtEnd(int);
void circularDoublyLinkList();
void random(int);
struct Node{
int data;
struct Node *next;
struct Node *prev;
};
struct Node *start = NULL;
struct Node *end = NULL;

struct Node* cNode(int);
void main(){
    circularDoublyLinkList();
}
struct Node* cNode(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	return temp;
}
 void circularDoublyLinkList(){

    int ch=1;
    while(ch){
        printf("--------------> Enter Your Choice <---------------\n\n");    
        printf("==>111, For Random Nodes.\n");
		printf("==> 1, For Insert A New Node At Begin.\n");
        printf("==> 2, For Insert A New Node At End.\n");
        printf("==> 3, For Show all Values.\n");
        printf("==> 4, For Show all Values In Forword.\n");
        printf("==> 5, For Show all Values In Backword.\n");
        printf("==> 6, For Exit.\n");

		printf("\n---------------------------------------------------\n");

        int op,val,pos;    
        scanf("%d",&op);

        switch(op){
            case 1:{
                printf("\n\n Enter The Value For Insert : ");
                scanf("%d",&val);
                insertAtBigin(val);
				printf("\n\n");
                printf("%d Inserted \n",val);
				printf("\n\n");
            break;    
            }
            case 2:{
                printf("\n\n Enter The Value For Insert : ");
                scanf("%d",&val);
                insertAtEnd(val);
				printf("\n\n");
                printf("%d Inserted \n",val);
				printf("\n\n");
            break;    
            }

            case 3:{
				printf("\n\n");
                showAll();
                printf("\n\n");
            break;    
            }
            case 4:{
                printf("\n\n Enter The Value Target : ");
                scanf("%d",&val);
                showAllForword(val);
				printf("\n\n");
            break;    
            }
           case 5:{
                printf("\n\n Enter The Value Target : ");
                scanf("%d",&val);
                showAllBackword(val);
				printf("\n\n");
            break;    
            }   
            case 111:{
                printf("Enter Number of Random Node ");
				scanf("%d",&val);
				random(val);
				break;
            }
            default : {
                printf("\n\n--------------> Thank You For Using Application <---------------\n\n");
				return;				
            }

        }
        
        printf("Enter '1' for More opration '0' for End : ");
        scanf("%d",&ch);
		if(ch == 0)
			printf("\n\n--------------> Thank You For Using Application <---------------\n\n");
    }
  
}


void random(int x){
		for(int i=0;i<x;i++){
			insertAtEnd(rand());
		}
}

void insertAtBigin(int x){
	struct Node* temp = cNode(x);
		
	if(temp==NULL){
		printf("No Space...\n\n");
		return;
	}
	
	if(start == NULL){
		temp -> next = temp;
		temp -> prev = temp;
		end = temp;
		start = temp;
	}
	else{
		temp -> next = start;
		temp -> prev = end;
		end -> next = temp;
		start -> prev = temp;
		start = temp;
	}
}

void insertAtEnd(int x){
	if(start == NULL){
		insertAtBigin(x);
		return;
		 }
	struct Node* temp = cNode(x);
	temp -> next = start;
	temp -> prev = end;
	end -> next = temp;
	start -> prev = temp;
	end = temp;
		
}
void showAll(){
	if(start == NULL){
		printf("\n\nEmpty List...\n\n ");
		return;
	}
	struct Node* temp1 = start;
	do{
		printf("%d ",temp1->data);
		temp1 = temp1 -> next;
		
	}while(temp1!=start);
}
void showAllForword(int x){
	if(start == NULL){
		printf("\n\nEmpty List...\n\n ");
		return;
	}

struct Node *temp1 = start;
while(temp1->data !=x){
	temp1 = temp1->next;
	if(temp1==start){
		printf("\n\ntarget Does Not exist.\n\n");
		return;
	}
}
struct Node *temp2 = temp1;
do{
	printf("%d ",temp1->data);
	temp1 = temp1->next;
}while(temp1!=temp2);
}

void showAllBackword(int x){
	if(start == NULL){
		printf("\n\nEmpty List...\n\n ");
		return;
	}

struct Node *temp1 = start;

while(temp1->data !=x){
	temp1 = temp1->next;
	if(temp1==start){
		printf("\n\ntarget Does Not exist.\n\n");
		return;
	}
}
struct Node *temp2 = temp1;
do{
	printf("%d ",temp1->data);
	temp1 = temp1->prev;
}while(temp1!=temp2);

}