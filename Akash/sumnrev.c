#include<stdio.h>
void main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int sum=0,r,rev=0;

    while(n>0){
        r=n%10;
        sum =sum +r;
        rev=rev*10+r;
        n=n/10;
    }
    printf("sum of digits=%d\n",sum);
    printf("reverse=%d\n",rev);
}