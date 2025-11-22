#include<stdio.h>
int main(){
    int n,i,factorial=1;
    printf("enter  number n:");
    scanf("%d",&n);
    // if(n<0){
    //     printf("error");
    // }else{
for(i=1;i<=n;i++){
    factorial*=i;
}
printf("factorial of  n is :%d \n", factorial);

    
return 0;
}