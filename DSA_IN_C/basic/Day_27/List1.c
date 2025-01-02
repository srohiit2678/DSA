#include<stdio.h>
struct Node
{
 int data;
 struct Node *next;
};
struct Node *start = NULL;

void main()
{
    
     printf("%d \n",sizeof(struct Node)); // 4 + 4 

     struct Node s;
     s.data=10;
     s.next = &s;
     printf("%d \n",s.data); // 10
     printf("%d \n",s.next); // add.. of s 
}