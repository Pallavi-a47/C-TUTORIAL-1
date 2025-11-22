#include<stdio.h>
int main (){
    char latter;
    printf("enter latter:");
    scanf("%c",&latter);
    if(latter>='A' &&latter<= 'Z'){
        printf("latter is upper case");
    }else if(latter>='a' &&latter<= 'z'){
        printf("latter is lower case");
    }else{
        printf("not valid");
    }
}