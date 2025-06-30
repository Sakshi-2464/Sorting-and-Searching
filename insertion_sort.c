#include <stdio.h> // include standard input output library
int main() {
    int i,j,key,n,a[100]; //declare variables
    printf("enter the size of array: "); //ask for the size of the array
    scanf("%d",&n); //take input n as array size
    printf("enter the elements: "); //ask the user to enter elements
    // for loop to take user input for each element in array
    for(i=0;i<n;i++){ 
        scanf("%d",&a[i]);
    }
    // we enter element which is sorted by default
    // hence we start with second element -> j=1
    for(j=1;j<n;j++){
        key=a[j]; 
        // store the value at j in variable key - this is the value to be compared
        i=j-1; 
        // i points to the element which is the to the left of the element pointed by j
        // check the value of i and the value at i if it is greater than key
        while(i>=0 && a[i]>key){ 
            a[i+1]=a[i]; // if condtion is true move the element to right
            i--; // decrement i
        }
        a[i+1]=key; // put key at correct position
    }
    
    printf("sorted elements:");
    // for loop to show each element of the output array
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
