#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node *start = NULL;
struct Node * cNode(int);
void insertAtBegin(int);
void insertAtEnd(int);
int palindrome(struct Node *);
struct Node *revList(struct Node *);
void showAll();

int main(){
insertAtBegin(1);
insertAtEnd(2);
insertAtEnd(3);
insertAtEnd(2);
insertAtEnd(1);
showAll();
if(palindrome(start)){
    printf("palindrome \n");
}
else{
    printf("not palindrome \n");
}
printf("\n\n");
showAll();
return 0;
}


void showAll(){
	struct Node *temp = start;
	while(temp !=NULL){
		printf("%d ",temp->data);
		temp= temp->next;
	}
}

struct Node *cNode(int x){
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

void insertAtEnd(int x){
if(start==NULL){
    insertAtBegin(x);
    return;
}
struct Node *temp1 = start;
while(temp1->next!=NULL){
    temp1 = temp1->next;   
}
struct Node *temp = cNode(x);
temp ->next = NULL;
temp1->next = temp; 
}

int palindrome(struct Node *temp){
	
	if(temp==NULL||temp-> next==NULL)return 1;

	struct Node *first = temp;
	struct Node *second = temp;
	while(second->next!=NULL && second->next->next!=NULL){
		first = first->next;
		second = second->next->next;
	}
	struct Node *Nstart = revList(first->next); 
	first = temp;
	second = Nstart;
	while(second!=NULL){
		if(first->data!=second->data){
			revList(Nstart);
			return 0; //return -1;
	}

			first=first->next;
			second=second->next;
}
	revList(Nstart);
	return 1;
}
struct Node *revList(struct Node *temp){ 
    if(temp == NULL || temp->next==NULL){
        return temp;
    }   

struct Node* newStart = revList(temp->next);

struct Node* temp2 = temp->next;
temp2->next = temp;
temp ->next = NULL;

return newStart;
}
