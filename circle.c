#include <stdio.h>
int main()
{
    /*
    area of circle is = 3.1416 *(radius^2)
    */
    int radius;
    float areaOfCircle;
    const float pi = 3.1416;
    printf("Please enter your circle radius ");
    scanf("%d", &radius);
    areaOfCircle = pi * (radius * radius);
    printf("Total area of circle is \n %f", areaOfCircle);
}