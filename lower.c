//Convert Lower to higher Case letters

#include <stdio.h>
main()
{
    //declaration section
    char alpha,lalpha;

    //input section
    printf("Enter any upper case letter(A-Z) : ");
    scanf("%c",&alpha);

    //process
    lalpha = alpha + 32;

    //out put section
    printf("\n Lower case letter of %c is %c \n\n",alpha,lalpha);

}

