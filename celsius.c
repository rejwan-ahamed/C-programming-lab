#include <stdio.h>

int main()
{
    /*
   Fahrenheit to celsius formula is {(F-32)*5}/9
   */
    float fahrenheit;

    printf("Enter Fahrenheit temperature ");
    scanf("%f", &fahrenheit);
    int triangle_sub_total = ((fahrenheit - 32) * 5) / 9;
    printf("Fahrenheit to celsius temperature is %d C", triangle_sub_total);
}