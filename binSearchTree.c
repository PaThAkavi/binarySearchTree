#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;

int main(){
    insert();
    return 0;
}

void insert(){
    struct node *newnode, *parent;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Please enter the element : \n");
    scanf("%d", &newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }
    else{
        struct node *current;
        current = root;
        while(current){
            parent = current;
            if(newnode->data > current->data){
                current = current->right;
            }
            else{
                current = current->left;
            }
        }
        if(newnode->data > parent->data){
            parent->right = newnode;
        }
        else{
            parent->left = newnode;
        }
    }
}

void delete(){
    
}