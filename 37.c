#include<stdio.h>
int main(){
    float bill;
    int unit;
    printf("enter the unit value");
    scanf("%d",&unit);
    if(unit<100){
        bill=unit*1.5;
        printf("the bill is %.2f",bill);
    }else if(unit<200){
        bill=unit*2;
        printf("the bill is %.2f",bill);
    }else if(unit<300){
        bill=unit*2.5;
        printf("the bill is %.2f",bill);
    }else if(unit<300){
        bill=unit*3;
        printf("the bill is %.2f",bill);
    }else if(unit<400){
        bill=unit*4;
        printf("the bill is %.2f",bill);
    }return 0;
}