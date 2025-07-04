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
// check if array is sorted
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[]={2,5,0,3};
    bool b=true;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            b= false;
            break;
        }
    }
    if(b){
        printf("sorted");
    }
    else{
        printf("not sorted");
    }
    return 0;
}
// count number of even entries and odd entries
#include<stdio.h>
int main(){
    int a[]={2,5,0,4,8,3};
    int e=0;
    int o=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]%2 ==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("total even numbers: %d\n",e);
    printf("total odd numbers: %d",o);
    return 0;
}
// reverse an array
#include<stdio.h>
int main(){
    int a[]={2,5,0,4,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
// left rotate array by 1 place
#include<stdio.h>
int main(){
    int a[]={2,5,0,4,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
