#include <stdio.h>
// linear search function
void linear_search(char a[],int n, char x){
    int found=0;
    for(int i=0;i<n;i++){
        // search for the value and return the corresponding index
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
linear_search(a,n,x); //function call
    return 0;
}
