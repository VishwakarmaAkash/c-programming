#include<stdio.h>
int main()

{
    int a[2][2];
    
    printf("enter elements of 2*2 matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        scanf("%d",&a[i][j]);
         
    }
    printf("transpose of two matrix:\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
        printf("%d ",a[j][i]);
        printf("\n");
        
    }
}