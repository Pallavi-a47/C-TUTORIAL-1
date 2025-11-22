#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("%d is positive", a);
    } else if (a < 0) {
        printf("%d is negative", a);
    } else {
        printf("The number is zero");
    }
    if (a != 0) {
        if (a % 2 == 0) {
            printf(" and even.\n");
        } else {
            printf(" and odd.\n");
        }
    } else {
        printf(".\n");
    }

    return 0;
}
