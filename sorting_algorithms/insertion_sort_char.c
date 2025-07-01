#include <stdio.h> //standard input output library
int main() {
    int n,i,j;
    char key;// declare variables
// take user input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &a[i]);
    }
    // insertion sort
    for(j=1;j<n;j++){
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    printf("sorted array:");
    for (i = 0; i < n; i++) {
        printf(" %c", a[i]);
    }
    return 0;
}
