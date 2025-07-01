#include <stdio.h> // include standard input output library
int main() {
    int i,j,smallest,n; 
    char temp; //declare variables
    printf("enter the size of array: "); //ask for the size of the array
    scanf("%d",&n); //take input n as array size
    printf("enter the elements: "); //ask the user to enter elements
    // for loop to take user input for each element in array
    char a[n];
    for(i=0;i<n;i++){ 
        scanf(" %c",&a[i]);
    }
    //selection sort
    for(j=0;j<n-1;j++){
        smallest=j; // assume current index holds the smallest value
        // loop to find the index holding smallest value
        for(i=j+1;i<n;i++){
            // if element to the right is smaller than element to the left we make that index as smallest
            if(a[i]<a[smallest]){
                smallest=i;
            }
        }
        // swap a[j] and a[smallest]
        temp=a[j];
        a[j]=a[smallest];
        a[smallest]=temp;
    }
    printf("sorted elements:");
    // for loop to show each element of the output array
    for(i=0;i<n;i++){
        printf(" %c",a[i]);
    }
    return 0;
}
