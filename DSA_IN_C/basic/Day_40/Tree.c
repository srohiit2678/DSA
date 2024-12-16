#include<stdio.h>
#include<stdlib.h>

struct Tree
{
    int data;
    struct Tree* left;
    struct Tree* right;  
};
    
    struct Tree* root = NULL;
    struct Tree* insert(struct Tree*,int);
    void showAll(struct Tree*);
    
    void main(){
        root = insert(root,10);
        insert(root,5);
        insert(root,15);
        insert(root,2);
        insert(root,1);
        insert(root,6);
        insert(root,12);
        showAll(root);
    }

    struct Tree* insert(struct Tree* temp,int x){
        if(temp == NULL){
            temp = malloc(sizeof(struct Tree));
            temp->data = x;
            temp->left = NULL;
            temp->right = NULL;
        } 
        else if(temp->data > x){
            temp->left = insert(temp->left,x);
        }    
        else{
            temp->right = insert(temp->right,x);
        }
        return temp;
    }

    void showAll(struct Tree* temp){
        if(temp == NULL)return;
        showAll(temp->left);
        printf("%d ",temp->data);
        showAll(temp->right);
    }
 
