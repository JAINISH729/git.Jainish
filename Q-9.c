#include<stdio.h>
int main()

{
    int rollno, sub1, sub2, sub3, total;
    float avg;
    char* name[20];

    printf("Enter your rollno.:- ",rollno);
    scanf("%d",&rollno);

    printf("Enter your Name:- ",name);
    scanf("%s",&name);

    printf("Enter sub1:- ",sub1);
    scanf("%d",&sub1);
    
    printf("Enter sub2.:- ",sub2);
    scanf("%d",&sub2);

    printf("Enter sub3:- ",sub3);
    scanf("%d",&sub3);

    total=sub1+sub2+sub3;
    avg =total/3;
    
    printf("\n rollno is:-%d",rollno);
    printf("\n name:-%s",name);
    printf("\n sub1:-%d",sub1);
    printf("\n sub2:-%d",sub2);
    printf("\n sub3:-%d",sub3);
    printf("\n total is:-%d",total);
    printf("\n avg is:-%.2f",avg);

}