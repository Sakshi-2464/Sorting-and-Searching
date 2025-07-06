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
