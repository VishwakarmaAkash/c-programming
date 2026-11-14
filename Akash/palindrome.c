#include<stdio.h>
int main(){
int n,r,origi,rev=0;
printf("enter number:");
scanf("%d",&n);
origi=n;
    for(;n>0;){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }if (origi==rev){
        printf("palindrome");
    }else
    printf("matlab kuchh bhi");
}