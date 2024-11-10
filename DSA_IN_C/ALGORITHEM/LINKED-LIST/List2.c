#include<stdio.h>
#include<stdlib.h>
void inseartAtB(int);

struct Node
{
 int data;
 struct Node *next;
};
struct Node *start = NULL;

void inseartAtB(int x)
{
 struct  Node *temp = malloc(sizeof(struct Node)); 
if(temp == NULL)
{
    printf("no space....");
    return;
}
    temp -> data = x;
    temp -> next = start;
    start = temp;
 
}

void main()
{
    inseartAtB(10);
    inseartAtB(20);
    inseartAtB(30);
    inseartAtB(40);
    inseartAtB(50);
    inseartAtB(60);

}