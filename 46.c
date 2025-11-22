//ask the user to enter year check if that is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("%d is leap year",year);
    }else{
        printf("%d is not leap year",year);
    }
}