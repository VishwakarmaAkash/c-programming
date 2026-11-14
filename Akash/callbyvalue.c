#include<stdio.h>
/*int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}*/

void swap(int xint y){
    int temp=x;
    x=y;
    y=temp;
    printf("inside function: x=%d,y=%d",x,y);
}
int main(){
    int a=10,b=20;
    printf("before a=%d,b=%d\n",a,b);
    swap (a,b);
    printf("after function a=%d,b=%d",a,b);
    return 0;
}