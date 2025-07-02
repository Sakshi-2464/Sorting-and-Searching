#include<stdio.h> // standard input output library
int main(){
    int n,i,j; // declare variables
    // input array size
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    // input array elements
    printf("enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // bubble sort
    for(i=0;i<n;i++){
        // loop to traverse through the whole array
        // in each pass the largest elememt move to the end of the insorted array
        for(j=0;j<n-1-i;j++){
            // loop to compare all elements
            if(a[j]<a[j+1]){
                // check for adjacent elements and swap accordingly
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    // display sorted array
    printf("sorted elements: ");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
