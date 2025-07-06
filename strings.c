// length of string
#include<stdio.h>
int main(){
    char s[]="function";
    int length=0;
    while(s[length]!='\0'){
        length++;
    }
    printf("%d",length);
    return 0;
}
// copy of string
#include<stdio.h>
int main(){
    char s[]="function";
    char copy[100];
    int i=0;
    while(s[i]!='\0'){
        copy[i]=s[i];
        i++;
    }
    copy[i]='\0';
    printf("%s",copy);
    return 0;
}
// reverse of string
#include<stdio.h>
int main(){
    char s[]="function";
    int j=0;
    while(s[j]!='\0'){
        j++;
    }
    for(int i=0;i<j/2;i++){
        char temp=s[i];
        s[i]=s[j-1-i];
        s[j-1-i]=temp;
    }
    printf("%s",s);
    return 0;
}
// check if string is palindrome
#include<stdio.h>
#include<stdbool.h>
int main(){
    char s[]="level";
    int j=0;
    bool b=true;
    while(s[j]!='\0'){
        j++;
    }
    for(int i=0;i<j/2;i++){
        if(s[j-1-i]!=s[i]){
            b=false;
            break;
        }
    }
    if(b){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}
//
