#include <stdio.h>
#include <stdint.h>

struct Node
{
    char data;
    struct Node *npx; // (next prev xor) => next ^ prev
};

struct Node *start = NULL;
struct Node *end = NULL;

void insert(char);
struct Node *XOR(struct Node *prev, struct Node *next);
void showAll();
void RevshowAll();

void main()
{
    insert('A');
    insert('B');
    insert('C');
    insert('D');
    insert('E');
    showAll();
    RevshowAll();
}

struct Node *XOR(struct Node *prev, struct Node *next)
{
    return (struct Node *)((uintptr_t)prev ^ (uintptr_t)next);
}
void insert(char x)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    if (start == NULL)
    {
        start = temp;
        end = temp;
        temp->npx = XOR(0, 0); // no prev no  next
    }
    else
    {
        end->npx = XOR(end->npx, temp);
        temp->npx = XOR(end, 0);
        end = temp;
    }
}
void showAll()
{
    struct Node *temp = start;
    struct Node *prev = 0;
    struct Node *prev2;
    while(temp!=end){
        printf("%c ",temp->data);
        prev2 = temp;
        temp = XOR(prev,temp->npx);
        prev = prev2;
    } 
        printf("%c \n\n",temp->data);
}
void RevshowAll()
{
    struct Node *temp = end;
    struct Node *prev = 0;
    struct Node *prev2;
    while(temp!=start){
        printf("%c ",temp->data);
        prev2 = temp;
        temp = XOR(prev,temp->npx);
        prev = prev2;
    } 
        printf("%c \n\n",temp->data);
}
