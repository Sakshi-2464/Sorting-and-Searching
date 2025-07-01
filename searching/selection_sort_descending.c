#include<stdio.h>
int main(){
    int n,i,j,largest,temp,a[50]; //declare variables
    // input array size
    printf("enter the array size: ");
    scanf("%d",&n);
    //input array elements
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // selection sort in descending order
    for(j=0;j<n-1;j++){
        largest=j; // assume current index holds largest value
        // loop to find the largest index
        for(i=j+1;i<n;i++){
            // if the element to the right is larger than the element to the left we make that index as largest
            if(a[i]>a[largest]){
                largest=i;
            }
        }
        // swap a[j] and a[largest]
        temp=a[j];
        a[j]=a[largest];
        a[largest]=temp;
    }
    // display sorted array
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
