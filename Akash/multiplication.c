#include<stdio.h>
void main(){
    int num,n;
    int table;
     printf("enter num and n:");
     scanf("%d %d",&num,&n);

    printf("tabble  of %d\n",num);

    for(int i=1; i<=n;i++){
    table=num*i;
    printf("%d\n",table);
}
}