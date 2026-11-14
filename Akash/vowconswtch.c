/*#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

        switch(ch){
            case'a':case'e':case'i':case'o':case'u':
            case'A':case'E':case'I':case'O':case'U':
            printf("vowel");
            break;
            default:
            printf("constant");
        }
        return 0;
    }
   #include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90) printf("A");
    else if(marks>=75) printf("B");
    else if(marks>=60) printf("C");
    else printf("D");
    return 0;
}

#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);


    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
            printf("leap year");
            else
            printf("not leap year");
        }else printf("leap year");
    }else printf("not leap year");
}
#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        
        default: printf("Invalid");
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,max;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    if(a[i]>max)
    max=a[i];
    printf("largest:%d\n",max);
    return 0;
}


