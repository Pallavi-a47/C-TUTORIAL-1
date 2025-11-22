//create atm machine user have to  ask balance withdraw,deposite,exit
#include<stdio.h>
int main(){
    int b=50000;
    int w,deposite,ch,e;
    printf("how much you want to withdraw:");
    scanf("%d",&w);
    printf("how much you want to deposite:");
    scanf("%d",&deposite);
    printf("enter \n1.balance\n2.withdraw\n3.deposite\n4.exit");
    printf("enter the choice:");
    scanf(" %d",&ch);
    switch(ch){
        case 1:
        printf("balance is %d",b);
        break;
        case 2:if('w'>'b')
        printf("your amount is insufficient");
        printf("withdraw amount is is %d",w);
        break;
        case 3:
        printf("your amount is deposited is %d",deposite);
        printf("your new balanc is %d",deposite+b);
        break;
        case 4:
        printf("exit %d",e);
        break;

}
}