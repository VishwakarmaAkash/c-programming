#include<stdio.h>
void main(){
     int original[10] ={1,2,3,4,5,6,7,9,89,0};
     int copy[10];

         int j=9;


     for (int i=0;i<10;i++){
        copy[i]=original[j];
        j--;
     }
     printf ("copied array:\n");

     for (int i=0;i<10;i++){
        printf("%d\n",copy[i]);
     }
     return;
}