#include<stdio.h>
#include<math.h>
int main(){
    int m,a,b,c,average;
    printf("enter  the m : ");
    scanf("%d",&m);
    if(m>90){
        printf(" %d grade is a",m);
    }else if(m<90&&m>70) {
        printf(" %d grade is b ",m);
    }
     else if(m>50&&m<70){
            printf("%d grade is c",m);
        }
    else
        {
            printf("%d grade is average",m);
            return 0;
        }
    }