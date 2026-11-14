#include<stdio.h>
int main (){
    int n,count=0;
    printf("enter nummber:");
    scanf("%d",&n);

    for(;n>0;n=n/10){
        count++;
        printf("%d\n",count);
        }
    printf("%d",count);
     return 0;
}