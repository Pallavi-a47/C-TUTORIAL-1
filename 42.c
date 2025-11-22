#include<stdio.h>
int main(){
    char month;
    printf("enter the month:");
    scanf("%d",&month);
    switch(month){
        case 12:case 1:case 2:printf("winter");
        break;
        case 3:case 4:case 5:printf("summer");
        break;
        case 6:case 7:case 8:case 9:printf("rainy");
        break;
        case 10 :case 11:printf("spring");
    }
}