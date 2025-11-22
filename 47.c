//create manu first find area of circle and square and rectangle triangle
#include<stdio.h>
int main(){
    int ch,r,l,b;
    float phi=3.14 ,area;
    printf("enter the radius r:");
    scanf("%d",&r);
    printf("enter the l and b:");
    scanf("%d%d",&l,&b);
    printf("enter \n1.circle area\n2.square area\n3.rectangle area\n4.triangle ");
    printf("enter the choice:");
    scanf(" %d",&ch);
    switch(ch){
        case 1:
        area=phi*r*r;
        printf("circle area r is %.2f ",area);
        break;
        case 2:
        area=4*l;
        printf(" square area l and b is %.2f ",area);
        break;
        case 3:
        area=l*b;
        printf("rectangle area a and b is %.2f",area);
        break;
        case 4:
        area=0.5*l*b;
        printf("triangle area l and b is %.2f",area);
    }

    }
/*#include <stdio.h>

int main() {
    int ch, r, l, b;
    float phi = 3.14, area;

    printf("Enter the radius r: ");
    scanf("%d", &r);

    printf("Enter length and breadth (l and b): ");
    scanf("%d%d", &l, &b);

    printf("Choose the shape to calculate area:\n");
    printf("1. Circle area\n");
    printf("2. Square area\n");
    printf("3. Rectangle area\n");
    printf("4. Triangle area\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            area = phi * r * r;
            printf("Circle area is %.2f\n", area);
            break;
        case 2:
            area = l * l;
            printf("Square area is %.2f\n", area);
            break;
        case 3:
            area = l * b;
            printf("Rectangle area is %.2f\n", area);
            break;
        case 4:
            area = 0.5 * l * b;
            printf("Triangle area is %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
*/