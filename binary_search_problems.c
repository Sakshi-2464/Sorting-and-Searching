//finding square root of a number using binary search
#include<stdio.h>
int mySqrt(int x) {
    if (x<2)
        {return x;}
int result;
    int l=1;
    int r=x;

    while (l<=r){
        int mid=l+(r-l)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            l=mid+1;
            result= mid;
        }
        else{
            r=mid-1; 
        }
    }
    return result;
}
int main(){
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    int root=mySqrt(n);
    printf("square root for %d is %d",n,root);
  return 0;
}
