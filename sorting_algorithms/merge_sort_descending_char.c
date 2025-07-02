#include<stdio.h>
// merge function
void merge(char a[], int l, int mid, int r){
    int i,j,k; // declare variables
    // find the size of 2 sub arrays
    int n1=mid-l+1;
    int n2=r-mid;
    // declare the temporary sub arrays
    char L[n1];
    char R[n2];
    // copy contents to these arrays
    for(i=0;i<n1;i++){
        L[i]=a[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=a[mid+1+j];
    }
    
    i=0; // index foe L[]
    j=0; // index for R[]
    k=l; // index for merged sub array a[]
    
    // append the elements according to the values in a[]
    while(i<n1 && j<n2){
        if(L[i]>=R[j]){
            a[k++]=L[i++]; // place L[i] into a[k], then increment i and k
        }
        else{
            a[k++]=R[j++]; // place R[j] into a[k], then increment j and k
        }
    }
    // append remaining elements of L[] if any
    while(i<n1){
        a[k++]=L[i++];
    }
    // append remaining elements of R[] if any
    while(j<n2){
        a[k++]=R[j++];
    }
}
// merge sort
void merge_sort(char a[],int l, int r){
    if(l<r){
        int mid=(l+r) /2;
        // recurssive function calls
        // sort the two halves
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        // after sorting merge the sorted halves
        merge(a,l,mid,r);
    }
}
int main(){
    int n,i,j,k;
    printf("enter size:");
    scanf("%d",&n);
    char a[n];
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("sorted elements:");
    for(i=0;i<n;i++){
        printf(" %c",a[i]);
    }
    return 0;
}
