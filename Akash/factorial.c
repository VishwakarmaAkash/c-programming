#include<stdio.h>
//void main()
//{
   /* int n,factorial=1;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial=(factorial*i);
        printf("%d\n",factorial);
    }printf("%d",factorial);

    int n,fact=1;
    printf("enter number:");
    scanf("%d",&n);
    int i=1;
    do{
        fact = fact*i;
        printf("%d\n",fact);

        i++;
    }while(i<=n);

    int n,fact=1;
    printf("enter number");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
    {
        fact=fact*i;
        printf("%d\n",fact);
        i++;
    }*/
   //int fact(int  n);

   int main(){
        printf("%d", fact(5));
   }
   int fact(int n)
   {
    if(n==0)
    {
        return 1;
    }
    int num = fact(n-1);
    int num1= num*n;
    return  num1;
   }
