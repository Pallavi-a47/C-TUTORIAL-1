#include<stdio.h>
int main(){
    int a,b,mod,mul,dif,div;
    printf("enter a value of a and b:");
    scanf("%d%d",&a,&b);
    dif=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("Difference is: %d\n", dif);
    printf("Multiplication is: %d\n", mul);
    printf("Division is: %d\n", div);
    printf("Modulus is: %d\n", mod);

    return 0;
}