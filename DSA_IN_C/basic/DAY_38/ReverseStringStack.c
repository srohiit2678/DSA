#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define CAP 50

char stack[CAP];
int top =-1;

void push(char);
char pop();
bool isEmpty();
char peek();

void main(){
    char input[CAP];
    printf("Enter any String.");
    scanf("%[^\n]s",input);
    int i=0;
    while(input[i]!='\0'){
        push(input[i]);        
        i++;
    }
    i=0;
    while(!isEmpty()){
        input[i++] = pop();
    }
    printf("%s",input);

}

void push(char x){
    if(top==CAP-1)return;
    stack[++top] = x;
}



char pop(){
    if(top==-1)return'\0';
    return stack[top--];
}
char peek(){
    if(top==-1)return '\0';
    return stack[top];
}
bool isEmpty(){
    if(top==-1)return true;
    return false;
}














