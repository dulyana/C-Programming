#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;


    printf("Enter the temperature reading in Fahrenheit : ");
    scanf("%f",&F);



    C=(5.00/9.00)*(F-32.00);


    printf("Value in Celsius is : %f",C);



    return 0;
}
