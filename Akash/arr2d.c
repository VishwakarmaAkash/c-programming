#include<stdio.h>
void main()
{
    /*int aman[2][4]={{1,2,4,6},{1,2,3,4}};
    for(int i=0;i<2;i++){
        for (int j=0;j<4;j++)
    {
        printf("%d ",aman[i][j]); 
    }printf("\n");
    int matrix[4][4]={{8,4,5,6},{3,4,5,6},{4,3,6,7},{5,4,3,7}};
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        printf("%d  ",matrix[i][j]);
    }printf("\n");}*/

    int matrix[3][3][4]={
       { {0,1,2,3},{4,5,6,7},{8,9,10,11}},
       {{12,13,14,15},{16,17,18,19},{20,21,22,23}}
        };
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<4;k++)
                printf("%d  ",matrix[i][j][k]);
                printf("\n");
            }printf("\n");
        }
}
