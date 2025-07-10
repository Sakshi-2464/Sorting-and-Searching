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
// right rotate array by 1 place
#include<stdio.h>
int main(){
    int a[]={2,5,0,4,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
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
// swapping adjacent elements in array
#include<stdio.h>
int main(){
    int a[]={2,50,56,4,8};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i+=2){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
}
// get smallest positive integer from array
#include<stdio.h>
int main(){
    int a[]={-22,-4,88,6,-9,7,-8};
    int n=sizeof(a)/sizeof(a[0]);
    int m=-1;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            if(m==-1 || a[i]<m){
                m=a[i];
            }   
        }
    }
    if(m==-1){
        printf("no positive integer exist");
    }
    else
    {
        printf("smallest positive integer: %d",m);
    }
}
// get largest positive integer from array
#include<stdio.h>
int main(){
    int a[]={-22,-4,88,6,-9,7,-8};
    int n=sizeof(a)/sizeof(a[0]);
    int m=-1;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            if(m==-1 || a[i]>m){
                m=a[i];
            }   
        }
    }
    if(m==-1){
        printf("no positive integer exist");
    }
    else
    {
        printf("largest positive integer: %d",m);
    }
}
// get largest negative integer form array
#include<stdio.h>
int main(){
    int a[]={22,8,-7,-9,55};
    int n=sizeof(a)/sizeof(a[0]);
    int m=-1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(m==-1 || a[i]>m){
                m=a[i];
            }   
        }
    }
    if(m==-1){
        printf("no negative integer exist");
    }
    else
    {
        printf("largest negative integer: %d",m);
    }
}
// get smallest negative integer from array
#include<stdio.h>
int main(){
    int a[]={22,8,-7,-9,55};
    int n=sizeof(a)/sizeof(a[0]);
    int m=-1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(m==-1 || a[i]<m){
                m=a[i];
            }   
        }
    }
    if(m==-1){
        printf("no negative integer exist");
    }
    else
    {
        printf("smallest negative integer: %d",m);
    }
}
// count number of positive and number of negative integers and number of zeros
#include<stdio.h>
int main(){
    int a[]={22,8,-7,0,10,-57,0,6,-9,55};
    int n=sizeof(a)/sizeof(a[0]);
    int pos=0;
    int neg=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos++;   
        }
        else if(a[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("number of positive integers: %d\n",pos);
    printf("number of begative integers: %d\n",neg);
    printf("number of zeros: %d",zero);
}
// sum of all positive inetegers and sum of all negative integers
#include<stdio.h>
int main(){
    int a[]={2,4,0,-2,0,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int pos_sum=0;
    int neg_sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos_sum+=a[i];   
        }
        else if(a[i]<0){
            neg_sum+=a[i];
        }
    }
    printf("sum of positive integers: %d\n",pos_sum);
    printf("sum of negative integers: %d",neg_sum);
}
// get all positive inetgers in ascending order
#include<stdio.h>
int main(){
    int a[]={6,9,8,2,-4,0,-2,0,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int pos_arr[n];
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos_arr[j++]=a[i];   
        }
    }
    for(i=0;i<j;i++){
        for(int k=0;k<j-i-1;k++){
            if(pos_arr[k]>pos_arr[k+1]){
                int temp=pos_arr[k];
                pos_arr[k]=pos_arr[k+1];
                pos_arr[k+1]=temp;
            }
        }
    }
    for(i=0;i<j;i++){
        printf(" %d",pos_arr[i]);
    }
}
// positive integers in descending order
#include<stdio.h>
int main(){
    int a[]={6,9,8,2,-4,0,-2,0,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int pos_arr[n];
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos_arr[j++]=a[i];   
        }
    }
    for(i=0;i<j;i++){
        for(int k=0;k<j-i-1;k++){
            if(pos_arr[k]<pos_arr[k+1]){
                int temp=pos_arr[k];
                pos_arr[k]=pos_arr[k+1];
                pos_arr[k+1]=temp;
            }
        }
    }
    for(i=0;i<j;i++){
        printf(" %d",pos_arr[i]);
    }
}
// negative integers in descending order
#include<stdio.h>
int main(){
    int a[]={6,9,8,2,-4,0,-2,0,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int neg_arr[n];
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            neg_arr[j++]=a[i];   
        }
    }
    for(i=0;i<j;i++){
        for(int k=0;k<j-i-1;k++){
            if(neg_arr[k]<neg_arr[k+1]){
                int temp=neg_arr[k];
                neg_arr[k]=neg_arr[k+1];
                neg_arr[k+1]=temp;
            }
        }
    }
    for(i=0;i<j;i++){
        printf(" %d",neg_arr[i]);
    }
}
// negative integers in ascending order
#include<stdio.h>
int main(){
    int a[]={6,9,8,2,-4,0,-2,0,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int neg_arr[n];
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            neg_arr[j++]=a[i];   
        }
    }
    for(i=0;i<j;i++){
        for(int k=0;k<j-i-1;k++){
            if(neg_arr[k]>neg_arr[k+1]){
                int temp=neg_arr[k];
                neg_arr[k]=neg_arr[k+1];
                neg_arr[k+1]=temp;
            }
        }
    }
    for(i=0;i<j;i++){
        printf(" %d",neg_arr[i]);
    }
}
//Find the Missing Number
//Given n-1 numbers in range 1 to n, find the missing one.
#include<stdio.h>
int main(){
    int a[]={2,1,3,6,7,4};
    int n=sizeof(a)/sizeof(a[0])+1;
    int c=0;
    int s=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        c+=a[i];
    }
    printf("%d",s-c);
    return 0;
}
// find leader element in array
// an element is leader if it is greater than all the elements to its right 
#include <stdio.h>
#include<stdbool.h>
int main(){
    int a[]={2,5,6,7,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<n;i++){
            bool b=true;
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                b= false;
                break;
            }
        }
    if(b){
        printf(" %d",a[i]);
        }
    }
    return 0;
}
// move all zeros to right
#include<stdio.h>
int main(){
    int a[]={2,0,0,56,9,0,12,0,6,0,8};
    int n=sizeof(a)/sizeof(a[0]);
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j++]=a[i];
        }
    }
    while(j<n){
        a[j++]=0;
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
//move all zeros to left
#include<stdio.h>
int main(){
    int a[]={2,56,9,0,12,0,6,0,8};
    int n=sizeof(a)/sizeof(a[0]);
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]!=0){
            a[j--]=a[i];
        }
    }
    while(j>=0){
        a[j--]=0;
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
// prefix sum array
#include<stdio.h>

int main() {
    // Original array
    int a[] = {2, 6, 3, 5, 8, 9, 4};

    // Calculate size of array
    int n = sizeof(a) / sizeof(a[0]);

    // Declare prefix sum array
    int prefix[n];

    // Initialize first element of prefix array
    prefix[0] = a[0];

    // Build prefix sum array
    // Each prefix[i] = a[0] + a[1] + ... + a[i]
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    // Print the prefix sum array
    printf("Prefix array:\n");
    for(int i = 0; i < n; i++) {
        printf(" %d", prefix[i]);
    }

    // Ask user for a range (L to R)
    printf("\nEnter the range for prefix (L R):\n");
    int L, R, sum;
    scanf("%d %d", &L, &R);

    // Validate the range
    if (L < 0 || R >= n || L > R) {
        printf("Invalid range\n");
    } else {
        // If L is 0, prefix[R] is the sum directly
        if (L == 0) {
            sum = prefix[R];
        }
        // Else, subtract prefix[L-1] to get range sum
        else {
            sum = prefix[R] - prefix[L - 1];
        }

        // Print the result
        printf("Sum of array elements from index %d to %d is %d\n", L, R, sum);
    }

    return 0;
}
// remove duplicates from unsorted array
#include<stdio.h>
int main(){
    int a[]={2,4,3,3,5,2,6,4,8};
    int n=sizeof(a)/sizeof(a[0]);
    int results[n];
    int k=0;
    for(int i=0;i<n;i++){
        int duplicate=0;
        for(int j=0;j<k;j++){
            if(a[i]==results[j]){
                duplicate=1;
                break;
            }
        }
        if(!duplicate){
            results[k++]=a[i];
        }
    }
    for(int i=0;i<k;i++){
        printf(" %d",results[i]);
    }
    return 0;
}
// 2-sum
#include<stdio.h>
int main(){
    int a[]={2,7,1,8,11,15};
    int n=sizeof(a)/sizeof(a[0]);
    int target=9;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                printf("indices: %d %d\n",i,j);
                printf("values: %d %d\n",a[i],a[j]);
                found=1;
            }
        }
    }
    if(!found){
    printf("no pairs");}
    return 0;
}
//
