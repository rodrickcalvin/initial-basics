#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius, circumference, area, diameter;
    double pi = 3.141592654;

    printf("Enter the radius:");
    scanf("%lf", &radius);

    diameter = 2 * radius;
    area = radius * radius * pi;
    circumference = 2 * pi * radius;

    printf("The radius is %lf.\n", radius);
    printf("The diameter is %lf.\n", diameter);
    printf("The area is %lf.\n", area);
    printf("The circumference is %lf.\n", circumference);

    return 0;
}
