#include<stdio.h>
int main(){
    int a,b,c,r1,r2,r3,arm,original;
    printf("enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    printf("enter the original num;");
    scanf("%d",&original);
    r1=a*a*a;
    r2=b*b*b;
    r3=c*c*c;
    arm=r1+r2+r3;
    printf("the armstorng num is %d:",a);
    if(original==arm){
        printf("given num is armstrong");
    }


}//other logic is we can use power formula total=pow(a,3)+pow(b,3)+pow(c,3) and 
//original=a*100+b*10+c*1