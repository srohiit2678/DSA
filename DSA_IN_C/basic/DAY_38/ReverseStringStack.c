#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define CAP 20

char stack[CAP];
int top = -1;

void push(char);
char pop();
bool isEmpty();

void main(){
    char input[CAP];
    printf("Enter The String : ");
    scanf("%s",input);
    int i=0;
    while(input[i]!='\0')   push(input[i++]);
    i=0;
    while(!isEmpty())   input[i++] = pop();

    printf("%s",input);
}

void push(char c){
    stack[++top]=c;
}

char pop(){
    return stack[top--];
}

bool isEmpty(){
    if(top==-1)return true;
    return false;
}
