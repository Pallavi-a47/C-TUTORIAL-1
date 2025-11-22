#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the num1 and num2,num3:");
    scanf("%d%d%d",&num1,&num2,&num3);
    (num1>num2 && num1>num3)?printf("num1 is greater\n"):(num2>num3)?printf("num2 is greater\n"):printf("num3 is greater\n");
    return 0;
}