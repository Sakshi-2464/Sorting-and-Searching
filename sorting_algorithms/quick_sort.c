#include<stdio.h>
// swap function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// partition function
int partition(int a[], int l, int r){
    int pivot=a[r]; // last element as pivot
    int i=l-1;
    // Initialize i to one position before the start of the subarray
// i will track the last element smaller than the pivot.
    for(int j=l;j<r;j++){
           // j scans the array from the left (l) to one before the pivot (r - 1)
        if(a[j]<pivot){
             // If current element is smaller than the pivot...
            i++;
             // ...we move the boundary of smaller elements by increasing i
            swap(&a[i],&a[j]);
            // ...and swap the current element with the element at i.
        // This places the smaller element in the correct partition.
        }
    }
    swap(&a[i+1],&a[r]);
    // After the loop, place the pivot in its correct position:
// i + 1 is the first index where pivot is greater than all to its left.
// So, we swap pivot (a[r]) with a[i+1].
    return i+1;
    // Return the index of the pivot's correct position.
// This is used to recursively apply quick sort to left and right subarrays.
}
// now all the elements to the left of pivot are smaller than pivot and the elements to the right are greater than pivot
// quick sort function, recurssive call
void quick_sort(int a[], int l, int r){
    if(l<r){
        int part=partition(a,l,r);
        quick_sort(a,l,part-1);
        quick_sort(a,part+1,r);
    }
}
int main(){
    int n;
    // input array size
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    // input elements of array
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1); // function call
    //display sorted elements
    printf("sorted elemets:");
        for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
