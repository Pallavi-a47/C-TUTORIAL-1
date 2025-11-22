#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the alphabets:");
    scanf("%c",&alpha);
    (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')||
    (alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')?printf("vowel"):printf("consonents");
}