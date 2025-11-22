#include<stdio.h>
int main(){
    char alp;
    printf("enter the alp:");
    scanf("%c",&alp);
    switch(alp){
        case 'a':printf("a is vowel");
        break;
        case 'e':printf("e is vowel");
        break;
        case 'i':printf("i is vowel");
        break;
        case 'o':printf("o is vowel");
        break;
        case 'u':printf("u is vowel");
        break;
        case 'A':printf("a is vowel");
        break;
        case 'E':printf("e is vowel");
        break;
        case 'I':printf("i is vowel");
        break;
        case 'O':printf("o is vowel");
        break;
        case 'U':printf("u is vowel");
        break;
        default:if(alp>='a'&& alp<='z'||alp>='A'&&alp<='Z'){
            printf("consonant");
            break;
        }
    }
}