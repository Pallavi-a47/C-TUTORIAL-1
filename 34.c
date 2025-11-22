#include<stdio.h>
int main(){
    int age,wei;
    printf("enter  the age and wei: ");
    scanf("%d%d",&age,&wei);
    if(age>=18&&wei>=50){
        printf("you can proceed");
    }else if(age<18) {
        printf(" %d age is not valid",age);
    }
    else if(wei<50){
        printf("%d wei is not valid",wei);
    }
}