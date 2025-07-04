// sum of all elements in array
#include<stdio.h>
int main(){
    int a[]={2,5,0,3};
    int c=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        c=c+a[i];
    }
    printf("%d\n",c);
    return 0;
}
// finding min and mx element from array
#include<stdio.h>
int main(){
    int a[]={2,5,0,3};
    int min=a[0];
    int max=a[0];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    printf("%d\n",min);
    printf("%d",max);
    return 0;
}
//
