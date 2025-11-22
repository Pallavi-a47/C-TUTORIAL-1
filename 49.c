/*if shoping above 5k 20% discount
if shoping above 3k 15% discount
if shoping above 1k 10% discount*/
#include<stdio.h>
int main(){
    int a;
    float discount;
    printf("enter purchasing amount a is:");
    scanf("%d",&a);
    if(a>5000){
       discount=a*0.2;
       printf("total amount is %.2f",discount);
    }
    else if(a>3000){
          discount=15/a*100;
       printf("total amount is %.2f",discount);

    }else if(a>1000){
         discount=10/a*100;
       printf("total amount is %.2f",discount);

    }

}


