#include <stdio.h>
#include <math.h>

int main() {
    int x1,x2,y1,y2;
    float a,b,c;

    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y2: ");
    scanf("%d",&y2);

    a=pow(x1-x2,2);
    b=pow(y1-y2,2);
    c=pow(a+b,0.5);

    printf("Distance: %.2f",c);
    return 0;
}
