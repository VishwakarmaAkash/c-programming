#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
        printf("a is greatest:%d",a);
        else
        printf("b is greatest:%d",b);
    }
    else if(b>c)
    {
        printf("b is greatest:%d",b);
    }
    else{
        printf("c is greates:%d",c);
    }
}
