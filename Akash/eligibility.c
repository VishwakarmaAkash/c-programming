#include<stdio.h>
int main(){
    int marks,attendance;
    printf("enter marks and attendance:");
    scanf("%d %d",&marks,&attendance);

    if (marks>=75){
        if(attendance>=75)
        printf("eligible for  scholarship");
        else
        printf("ineligible due  to low attendance");
    } else {
        printf("oneligible due to low marks");
    }

}