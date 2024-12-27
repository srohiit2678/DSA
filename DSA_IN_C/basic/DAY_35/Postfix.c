#include<stdio.h>
#include<stdbool.h>
#define CAP 50
void push(char);
char pop();
char peek();
bool isEmpty();
int priorty(char);
char stack[CAP];
int top = -1;

void main(){
char input[CAP];
char output[CAP];

printf("Enter any Expresion :  ");
scanf("%s",input);
int i=0;
int j=0;
while(input[i]!='\0'){
    if(input[i]=='('){
        push(input[i]);
    }
    else if(input[i]>=65 && input[i]<=90){
        output[j++]=input[i];
    }
    else if(input[i]==')'){
        while(peek()!='('){
            output[j++] = pop();
        }
        pop();
    }
    else{
        while(priorty(input[i])<=priorty(peek())){
            output[j++] = pop();
        }
        push(input[i]);
    }
 
while(!isEmpty()){
    output[j++]=pop();
}        
    i++;
}
output[j] = '\0';
printf("%s",output);
}

void push(char x){
stack[++top] = x;
}
char pop(){
    return stack[top--];
}
char peek(){
return stack[top];
}
bool isEmpty(){
    if(top==-1)return true;
    return false;
}
int priorty(char x){
    switch(x){
        case '(': 
        return 0;
        
        case '+':
        case '-': 
        return 1;
        
        case '*': 
        case '/': 
        return 2;
        
        case '^': 
        return 3;
    }
}