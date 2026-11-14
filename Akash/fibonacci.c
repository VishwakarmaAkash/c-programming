#include<stdio.h>
void main()
{
    int n;
    int a=0,b=1,c;
    printf("enter number:");
    scanf("%d",&n);
         
    printf("fibonacci series:\n");
        for(int i=1;i<=n;i++)
        {
            
              printf("%d\n",a);
                c=a+b;
                a=b;
                b=c;
            
        }   
}