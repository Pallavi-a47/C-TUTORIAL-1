#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the num1 and num2:");
    scanf("%d%d",&num1,&num2);
    (num1>num2)?printf("num1 is greater\n"):printf("num2 is greater\n");
    return 0;
}