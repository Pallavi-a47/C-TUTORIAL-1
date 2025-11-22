#include<stdio.h>
int main(){
    int a,b;
    printf("enter  the a and b: ");
    scanf("%d%d",&a,&b);
    if(a<b){
        printf(" %d is greater",b);
    }else {
        printf(" %d is greater",a);
    }
}