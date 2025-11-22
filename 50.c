#include<stdio.h>
int main(){
    
    int score=0,country,A,college,B,branch,C;
    char ch;

    printf("which is your country:");
    printf("enter \n1.A india \n2.B china \n3.C pakistana \n4.D america");
    printf("enter the choice:");
    scanf(" %c",&ch);
    if(country=='A'){
        score=score+1;
        printf("excellent");
    }else{
        printf("better luck next time\n");
    }
     printf("which is your college:");
    printf("enter \n1.Aindia \n2.Bsdm \n3.C pakistana \n4.D america");
    printf("enter the choice:");
    scanf(" %c",&ch);
    if(college=='B'){
        score=score+1;
        printf("good");
    }
        else{
            printf("better luck next time");
        } 
        printf("which is your branch:");
    printf("enter \n1.Aindia \n2.B china \n3.Caiandds \n4.D america");
    printf("enter the choice:");
    scanf(" %c",&ch);
    if(branch=='C'){
        score=score+1;
        printf("excellent");
    }else{
            printf("better luck next time");
        }
}