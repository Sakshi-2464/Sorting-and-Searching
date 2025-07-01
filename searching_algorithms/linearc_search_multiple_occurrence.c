#include <stdio.h>
// linear search function
int linear_search(int a[],int n, int x){
    for(int i=0;i<n;i++){
        // search for the value and return the corresponding index
        if(a[i]==x){
            return i;
        }
    }
    return -1;
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
int index= linear_search(a,n,x); //function call
// check and return the index
if(index!=-1){
    printf("element found at index %d",index);
}
else{
    printf("element not found");
}
    return 0;
}
