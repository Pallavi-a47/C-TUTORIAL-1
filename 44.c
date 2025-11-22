#include<stdio.h>
int main(){
    int age ;
    char gender;
    printf("enter the age of person:");
    scanf("%d",&age);
    printf("enter the gender of person:");
    scanf("%c",&gender);
    if(age>=18 && gender =='f'){
        printf("person adult female");
    }else if(age>=18 && gender=='m'){
        printf("person is adult male");
    }else if(age<=18 && gender=='f'){
        printf("person minor female");
    }else if(age<=18 && gender =='m'){
        printf("person is minor male");
    }


}