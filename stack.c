//performing stack operations
#include <stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value){
    if(top==MAX-1){
        printf("stack overflow\n");
    }
    else{
        top++;
        stack[top]=value;
        printf("pushed %d to stack",value);
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow- stack is empty nothing to pop out");
    }
    else{
        printf("popped out %d from stack",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("stack epmpty");
    }
    else{
        printf("peek element is %d",stack[top]);
    }
}
int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX - 1;
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
int main() {
    int choice,value;
    while (1) {
    printf("\nStack Operations\n");
    printf("1. Push\n2. Pop\n3. Peek\n4. Is Empty?\n5. Is Full?\n6. Display Stack\n7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("enter value to add:");
        scanf("%d",&value);
        push(value);
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        if (isEmpty())
        printf("Stack is empty\n");
        else
        printf("Stack is not empty\n");
        break;
        case 5:
        if (isFull())
        printf("Stack is full\n");
        else
        printf("Stack is not full\n");
        break;
        case 6:
        display();
        break;
        case 7:
        return 0;
        default:
        printf("Invalid choice\n");
    }
}
}
