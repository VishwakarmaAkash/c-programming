#include <stdio.h>
void main()
{
/*  int i;
    int arr1[10];
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    for(i=0;i<10;i++)
    {
    arr1[i]=arr[i];
    printf("%d\n",arr1[i]);


    }

    int i,arr[100];
    for (i=0;i<100;i++){
        arr[i]=i*2;
        printf("%d\n",arr[i]);
    }
*/

int temp[10],a[10]={1,2,3,5,6};
temp[10]=a[1];
a[1]=a[2];
a[2]=temp[10];
for (int i=0;i<10;i++)
printf("%d\n",a[i]);
}