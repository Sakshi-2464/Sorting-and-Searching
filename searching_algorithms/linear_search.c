#include <stdio.h>
// linear search function
void linear_search(int a[],int n, int x){
    int found=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("element found at index %d\n",i);
            found=1;
        }
    }
    if(!found){
        printf("element not found");
    }
}
int main() {
    int n,x; // declare variables
    // input array size
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n]; // declare array
    // input array elements
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // input element to search
printf("eneter element to search: ");
scanf("%d",&x);
// function call
linear_search(a,n,x);
    return 0;
}
