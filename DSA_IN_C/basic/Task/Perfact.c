#include<stdio.h>
#include<stdlib.h>

void insertAtBigin(int);
void showAllV();
void insertAtEnd(int);
int countNode();
void insertAtPosition(int,int);
void deleteAtBigin();
void deleteAtEnd();
void deleteAtPosition(int);
int searchNode(int);
void random(int);
void linkList();
void circularDoublyLinkList();

struct Node{
int data;
struct Node *next;
};
struct Node *start = NULL;

void reverseShowAll(struct Node*);

void main(){
                linkList();
}

void linkList(){
    int ch=1;
    while(ch){
        printf("--------------> Enter Your Choice <---------------\n\n");    
        printf("==>111, For Random Nodes.\n");
		printf("==> 1, For Insert A New Node At Begin.\n");
        printf("==> 2, For Insert A New Node At End.\n");
        printf("==> 3, For Insert A New Node At Any Position.\n");
        printf("==> 4, For Delete A New Node From Bigin.\n");
        printf("==> 5, For Delete A New Node From End.\n");
        printf("==> 6, For Delete A New Node From Any Position.\n");
        printf("==> 7, For Show all Values.\n");
        printf("==> 8, For Show all Values In Reverse Order.\n");
        printf("==> 9, Search A Value.\n");
        printf("==> 10, For Exit.\n");
        
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
                printf("\n Enter The Value For Insert : ");
                scanf("%d",&val);
                printf("\n Enter The Position For Insert : ");
                scanf("%d",&pos);
				printf("\n\n");
                insertAtPosition(pos,val);
                printf("%d Inserted At %d Place \n",val,pos);
				printf("\n\n");
            break;    
            }
            case 4:{
				printf("\n\n");
                deleteAtBigin();
				printf("Node Delete\n\n");
            break;    
            }
            case 5:{
				printf("\n\n");				
                deleteAtEnd();
				printf("Node Deleted\n\n");				
            break;    
            }
            case 6:{
                printf("\n Enter The Position For Delete : ");
                scanf("%d",&pos);
				printf("\n\n");                
				deleteAtPosition(pos);

                printf("%d'th Node Deleted \n\n\n",pos);
            break;    
            }
            case 7:{
				printf("\n\n");
                showAllV();
                printf("\n\n");
            break;    
            }
            case 8:{
				printf("\n\n");				
                reverseShowAll(start);
				printf("\n\n");
            break;    
            }
            case 9:{
                printf("\n Enter The Value for Search In List : ");
                scanf("%d",&val);
				printf("\n\n");				
                val = searchNode(val);
                printf("\n Value Found At Position %d : ",val);
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
	printf("----------------------------------------------------------------------------------------------------------\n");
    while(temp!= NULL){
		printf("| ");
        printf("%d |-->",temp->data);
        temp = temp->next;
    }
		printf("X");	
	printf("\n----------------------------------------------------------------------------------------------------------\n");

}

void reverseShowAll(struct Node* temp){
    if(temp==NULL)return;
    reverseShowAll(temp->next);
    printf("%d ",temp->data);
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
    
    struct Node *temp1 = start;
    start = start -> next;
    free(temp1);   
}


void deleteAtEnd(){
    struct Node *temp1 = start;
    struct Node *temp2 = start;
    while(temp1->next!=NULL){
        temp2 = temp1;
        temp1 = temp1-> next;
    }
    temp2->next = NULL;
    free(temp1);
}

void deleteAtPosition(int p){
    if(p<=1){
        deleteAtBigin();
        return;
    }
    if(p>countNode()){
        deleteAtEnd();
        return;
    }

    struct Node *temp1 = start;
    struct Node *temp2 = start;


    for(int i = 1;i<p;i++){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    free(temp1);
}


int searchNode(int x){
	int index = -1;
	if(start == NULL)return index;
	struct Node* temp = start;
	while(temp!=NULL){
		index++;
	if(temp->data == x)return index;		
	temp = temp -> next;
	}
	return -1;
}