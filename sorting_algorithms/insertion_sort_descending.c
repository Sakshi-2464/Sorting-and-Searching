#include<stdio.h>
int main(){
    int n,i,j,key,a[50]; // declare variables
  //input array size
    printf("enter the array size: ");
    scanf("%d",&n);
  //input elements
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  //insertion sort
  // first element sorted by default hence j=1
    for(j=1;j<n;j++){
        key=a[j]; // element to be compared
        i=j-1;
      // check if the element is smaller than key, if yes move it to the right
        while(i>=0 && a[i]<key){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
  // display sorted array
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
