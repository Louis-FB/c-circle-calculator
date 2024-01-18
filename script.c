#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Insert the radius of the circle: ");
    scanf("\n%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Circumference: %-lf\nArea: %-lf", circumference, area);
}