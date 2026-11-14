#include<stdio.h>
int main()
{
    long long int n,r,sum=0,temp;
    printf("enter n:");
        scanf("%llu",&n);
        temp=n;
    do
    {
        
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;  /* code */
      
    } while (n>0);
    if(sum==temp){
        printf("it is a pallindrome number");
                 }else
                 printf("no");
    return 0;
  }