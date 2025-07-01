#include <stdio.h>
// linear search function
int linear_search(char a[],int n, char x){
    for(int i=0;i<n;i++){
        // search for the value and return the corresponding index
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    char x; // declare variables
    // input array size
    printf("enter number of letters: ");
    scanf("%d",&n);
    char a[n]; // declare array
    // input array elements
    printf("enter letters:");
    for(int i=0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    // input element to search
printf("enter letter to search: ");
scanf(" %c",&x);
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
