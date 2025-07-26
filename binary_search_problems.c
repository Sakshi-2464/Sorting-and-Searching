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
        if(mid*mid==x){  // mid*mid may cause integer overflow so in such a case use mid==x/mid
            return mid;
        }
        else if(mid*mid<x){  // mid*mid may cause interger overflow so in such a case use mid<x/mid
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

// check if the given number is a perfect square using binary search
#include<stdio.h>
#include<stdbool.h>
bool checkPerfectSquare(int n) {
    int l=0;
    int r=n;
    if(n<0) return false;
    while(l<=r){
        long mid=l+(r-l)/2; 
        if(mid*mid==n)  // here we use long to prevent overflow --
        return true;
        else if (mid*mid<n) l=mid+1;
        else r=mid-1;
    }
return false;
}
int main(){
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    bool root=checkPerfectSquare(n);
    if(!root){
        printf("not a perfect square");
    }
    else{
        printf("perfect square");
    }
    return 0;
}
// get the count of negative nubers in 2d array sorted in descending order

