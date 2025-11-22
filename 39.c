#include<stdio.h>
int main(){
    char month;
    printf("enter the month:");
    scanf("%d",&month);
    switch(month){
        case 1:printf("january \n 31 days in this month");
        break;
        case 2:printf("feb \n 28 days in this month");
        break;
        case 3:printf("march \n 31 days in this month");
        break;
        case 4:printf("apil \n 30 days in this month");
        break;
        case 5:printf("may \n 31 days in this month");
        break;
        case 6:printf("june \n 30 days in this month");
        break;
        case 7:printf("july \n 31 days in this month");
        break;
        case 8:printf("august \n 30 days in this month");
        break;
        case 9:printf("sep \n 31 days in this month");
        break;
        case 10:printf("oct \n 30 days in this month");
        break;
        case 11:printf("nov \n 31 days in this month");
        break;
        case 12:printf("dec \n 30 days in this month");
        break;
        default:printf("not found");
    }
}