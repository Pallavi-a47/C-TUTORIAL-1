#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    (num>=0)?printf("positive\n"):printf("negative\n");
    return 0;
}