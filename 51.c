#include<stdio.h>
int main()
{
    char a,b;
    printf("Enter the two Characters:");
    scanf(" %c %c",&a,&b);
    if(a<b)
    {
        printf("%c Comes first",a);
    }
    else if(a>b)
    {
        printf("%c Comes first",b);
    }
    else if(a==b)
    {
        printf("%c are same",a);
    }
    else {
        printf("Invalid Entry:");
    }
    return 0;
}