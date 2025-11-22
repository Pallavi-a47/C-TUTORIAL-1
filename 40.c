#include<stdio.h>
int main(){
    int ch,a,b;
    printf("enter the a and b:");
    scanf("%d%d",&a,&b);
    printf("enter \n1.add\n.2sub\n3.mul\n4.div\n5.mod\n6 ");
    printf("enter the choice:");
    scanf(" %d",&ch);
    switch(ch){
        case 1:printf("add a and b is %d ",a+b);
        break;
        case 2:printf(" sub a and b is %d ",a-b);
        break;
        case 3:printf("mul a and b is %d",a*b);
        break;
        case 4:printf("div a and b is %d",a/b);
        break;
        case 5:printf("mod a and b is %d",a%b);
    }

    }