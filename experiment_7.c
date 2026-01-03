//7. Program to calculate area of a circle



#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle = %.2f", area);

    return 0;
}