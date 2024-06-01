#include <stdio.h>
main()
{
    char name[20] , gender , native[20] ;

    printf("Enter Your Full Name : ");
    scanf("%[^\n]",&name);

    printf("Enter Your Gender(M/F): ");
    fflush(stdin);
    scanf("%c",&gender);

    printf("Enter Your Native Place : ");
    scanf("%s",&native);

    printf("\n %s - ",name);
    printf("%c - ",gender);
    printf("%s \n",native);
}
