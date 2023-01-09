#include <stdio.h>

int main()
{
    /*
   area of triangle is = .5*(height*base)
   */
    int height;
    int base;

    printf("Enter height ");
    scanf("%d", &height);
    printf("Enter base ");
    scanf("%d", &base);
    int triangle_sub_total = {.5 * (height * base)};
    printf("your triangle total is %d", triangle_sub_total);
}