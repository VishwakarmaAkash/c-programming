#include<stdio.h>
void main()
{
   /* int n,sum =0,temp;
    printf("enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d\n",sum);

    int n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
        sum=sum+i;
    }
    printf("%d",sum);*/

    int n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    int i=1;

    do{
        printf("%d\n",i);
        i++;
        sum=sum+i;
    
    } while(i<=n);

     printf("%d",sum);
}