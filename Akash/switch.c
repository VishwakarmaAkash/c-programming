#include<stdio.h>
int main(){
    int a,b,choice;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);

    printf("1 add\n2 subtract\n3 multiplly\n4 divide\nenter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("sum=%d\n",a+b);
        break;
        case 2:printf("subtract=%d\n",a-b);
        break;
        case 3:printf("multiply=%d\n",a*b);
        break;
        case 4:printf("divide=%d\n",a/b);
        break;
        default:printf("invalid operator");
    }return 0;

}