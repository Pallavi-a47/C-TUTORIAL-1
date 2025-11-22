//ask user enter number and give sum of the number
/*#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the number n:");
    scanf("%d", &n); 
    sum = n*(n+1)/2;
    printf("sum is %d",sum);
}*/
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number n:");
    scanf("%d", &n); 
    for(int i=0;i<=n;i++){
        sum+=i;
    }printf("%d",sum);
    return 0;
}