#include <stdio.h>
int main()
{
    /*
    area of rectangle is = .5*(height^2+width^2)
    */
    float height;
    float width;
    float total_rectangle_area;
    printf("Enter height of the rectangle ");
    scanf("%f", &height);
    printf("Enter width of the rectangle ");
    scanf("%f", &width);

    float total_height = (height * height);
    float total_width = (width * width);

    total_rectangle_area = .5 * (total_height + total_width);
    printf("total rectangle is %.2f", total_rectangle_area);
}