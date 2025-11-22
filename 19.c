#include<stdio.h>
#include<math.h>
int main(){
    int a,b,sum,diff;
    float x,y,sum1,diff1;
    printf("enter a value of a and b:");
    scanf("%d%d",&a,&b);
    printf("enter the value of x and y:");
    scanf("%f%f",&x,&y);
    sum=a+b;
    diff=a-b;
    sum1=x+y;
    diff1=x-y;
    printf("sum is:%d\n",sum);
    printf("diff is:%d\n",diff);
    printf("sum1 is:%f\n",sum1);
    printf("diff1 is:%f\n",diff1);
    return 0;
}