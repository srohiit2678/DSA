#include<stdio.h>
#include<stdint.h>


struct Node{
    char data;
    struct Node *npx;
};
struct Node *start = NULL;
struct Node *end = NULL;
 
// return xor of two address and return struct Node * 
   struct Node * xor(struct Node *prev,struct Node *next);

// to insert new Node
 void insertAtE(char);

// show all values from start to end
  void showAll();  

// show all values from end to start
  void reversShowAll();

struct Node * xor(struct Node *prev,struct Node *next){
    return (struct Node *)((uintptr_t)prev ^ (uintptr_t)next);
    }

void main(){
    insertAtE('A');
    insertAtE('B');
    insertAtE('C');
    insertAtE('D');
    insertAtE('E');
    showAll();
    printf("\n\n\n\n");
    reversShowAll();
}

void insertAtE(char x){
    struct Node *temp = malloc(sizeof(struct Node)); // new node
    temp->data = x;
    if(start == NULL){

        //temp->npx = xor(0,0);
        temp->npx = 0;
        start = temp;
        end = temp;
    }
    else{
        end->npx = xor(end->npx,temp);
        //temp->npx = xor(end->npx,0);
        temp->npx = end;
        end = temp;
    }
 }

void showAll(){
    struct Node *temp = start;
    struct Node *prev = 0;
    struct Node *prev2;
    while(temp!=end){
        printf("%c ",temp->data);
        prev2 = temp;
        temp = xor(prev,temp->npx);
        prev = prev2;
    }
        printf("%c ",temp->data);
   }

   
void reversShowAll(){
    struct Node *temp = end;
    struct Node *prev = 0;
    struct Node *prev2;
    while(temp!=start){
        printf("%c ",temp->data);
        prev2 = temp;
        temp = xor(prev,temp->npx);
        prev = prev2;
    }
        printf("%c ",temp->data);
   }