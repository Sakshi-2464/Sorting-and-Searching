#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* createNode(int value){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct Node* buildTree(){
    int val;
    printf("enter value of the node (enter -1 for null)");
    scanf("%d",&val);
    if(val==-1) return NULL;
    struct Node* root=createNode(val);
    printf("enter left child for %d\n",val);
    root->left=buildTree();
    printf("enter right child for %d\n",val);
    root->right=buildTree();
    return root;
}
void inorder(struct Node* root){
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct Node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    printf("tree creation:\n");
    struct Node* root=buildTree();
    printf("inorder traversal:\n");
    inorder(root);
    printf("\n");
    printf("preorder traversal:\n");
    preorder(root);
    printf("\n");
    printf("postorder traversal:\n");
    postorder(root);
    printf("\n");
    return 0;
}
/*
inorder traversal:
2 1 3 
preorder traversal:
1 2 3 
postorder traversal:
2 3 1 
    */
