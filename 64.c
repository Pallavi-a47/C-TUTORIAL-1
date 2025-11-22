#include<stdio.h>
int main(){
    int n,rem,revnum=0;
    printf("enter the number n:");
    scanf("%d", &n); 
     int num=n;
    while(n!=0){
        rem=n%10;
        revnum=revnum*10+rem;
        n=n/10;
    }printf("%d",revnum);
    if(num==revnum){
        printf("given num is palidrome");
    }else{
        printf("given num is  not palidrome");
    }
}