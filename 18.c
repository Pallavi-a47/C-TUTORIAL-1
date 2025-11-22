#include<stdio.h>
#include<math.h>
int main(){
    int base,exponent;
    float  result;
    printf("enter a value of base:");
    scanf("%d",&base);
    printf("enter the value of exponent:");
     scanf("%d",&exponent);
     result = pow(base,exponent);
   printf("the power is %f\n",result);
    return 0;
}