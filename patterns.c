#include<stdio.h>
int main(){
    int n;
    printf("enter value for n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
enter value for n:5
*
**
***
****
*****
    */

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
enter value for n:5
*****
*****
*****
*****
*****
    */

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
enter value for n:5
*****
****
***
**
*
*/

