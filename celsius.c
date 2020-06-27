#include<stdio.h>
void main()
{
    float deg,far;
    printf("Input the temperature in degrees: ");
    scanf("%f",&deg);
    far = (deg * 9/5) + 32;
    printf("Temperature in Fahrenheit is: %f",far);
}
