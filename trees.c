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
    printf("%d",root->data);
    inorder(root->right);
}
int main(){
    printf("tree creation:\n");
    struct Node* root=buildTree();
    printf("inorder traversal:\n");
    inorder(root);
    printf("\n");
    return 0;
}
