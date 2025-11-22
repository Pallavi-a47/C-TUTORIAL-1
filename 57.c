/*#include<stdio.h>
int main(){
    int n,i;
    printf("enter table number n you want:");
    scanf("%d",&n);
for(i=1;i<=10;i++){
printf("%d*%d=%d\n", n,i,n*i);
}
return 0;
}*/
#include<stdio.h>
int main(){
    int n,i;
    printf("enter table number n you want:");
    scanf("%d",&n);
for(i=10;i>=0;i--){
printf("%d*%d=%d\n", n,i,n*i);
}
return 0;
}