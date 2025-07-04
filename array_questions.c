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
// finding min and max element from array
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
// second largest element in array
#include<stdio.h>
int main(){
    int a[]={2,5,0,4,8,33};
    int n=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    int secondmax=-1;
    for(int i=1;i<n;i++){
        if(a[i]>max){
            secondmax=max;
            max=a[i];
        }
        else if(a[i]>secondmax && a[i]!=max){
            secondmax=a[i];
        }
    }
    printf("%d",secondmax);
    return 0;
}
// remove duplicates from sorted array
#include<stdio.h>
int main(){
    int a[]={2,5,5,6,7,8,8,33};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            i++;
            a[i]=a[j];
        }
    }
    int len=i+1;
    printf("%d\n",len);
    for(i=0;i<len;i++){
        printf(" %d",a[i]);   
    }
    return 0;
}
// check for palindrome
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[]={5,6,6,7,6,5};
    int n=sizeof(a)/sizeof(a[0]);
    bool b=true;
    for(int i=0;i<n/2;i++){
    if(a[n-1-i]!=a[i]){
        b=false;
        break;
        }
    }
    if(!b){
        printf("not a palindrome");
    }
    else{
        printf("is a palindrome");
    }
    return 0;
}
// get even and odd elemens in 2 different arrays
#include<stdio.h>
int main(){
    int a[]={57,2,4,9,10,120,5};
    int n=sizeof(a)/sizeof(a[0]);
    int even[n];
    int odd[n];
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        if(a[i]%2 ==0){
            even[e++]=a[i];
        }
        else{
            odd[o++]=a[i];
        }
    }
    for(int i=0;i<e;i++){
    printf(" %d",even[i]);}
    printf("\n");
    for(int i=0;i<o;i++){
    printf(" %d",odd[i]);
    }
    return 0;
}
// difference between sum of even elements an sum of odd elements
#include<stdio.h>
int main(){
    int a[]={2,4,5,0,3};
    int n=sizeof(a)/sizeof(a[0]);
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        if(a[i]%2 ==0){
            e+=a[i];
        }
        else{
            o+=a[i];
        }
    }
    printf("%d",e-o);
    return 0;
}
// check for duplicate values in array
#include <stdio.h>
int main() {
    int a[]={2,5,6,90};
    int n=sizeof(a)/sizeof(a[0]);
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                found=1;
                printf("duplicates found: %d\n", a[i]);
                break;
            }
        }
    }
    if(!found){
        printf("no duplicates");
    }
    return 0;
}
// n-th largest element in array
#include <stdio.h>
int main() {
    int a[]={2,5,0,4,7};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("enter value for m:(mth element needed)\n");
    int m;
    scanf("%d",&m);
    if(m>0 && m<=n){
        printf("%d th largest element is: %d\n",m,a[m-1]);
    }
    else{
        printf("enter valid value");
    }
    return 0;
}
//
