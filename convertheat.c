//to convert fahrenheit into centigrade
#include <stdio.h>
main()
{
    float c , f ;

    printf("\n Enter the temperature in fahrenheit : ");
    scanf("%f",&f);

    c = (f -32)*5/9 ;

    printf("\n the temperature in centigrade is : %.2f C\n\n",c);
}

