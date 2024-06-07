// Print The No Of Bytes Occupied By The Varible

#include <stdio.h>
main()
{
    //declaration section
    int roll;
    double height;
    char name[20] , gender ;

    //initialization
    roll = height = 0;

    //input section
    printf("Enter Roll : ");
    scanf("%d",&roll);

    printf("Enter Your Gender(M/F) : ");
    fflush(stdin);
    scanf("%c",&gender);

    printf("Enter Your Name : ");
    fflush(stdin);
    scanf("[^\n]",&name);

    printf("Enter Height : ");
    fflush(stdin);
    scanf("%lf",&height);

    //out put section
    printf("\n roll no occupies %d bytes of space\n",sizeof(roll));
    printf("gender occupies %d bytes of space \n",sizeof(gender));
    printf("name occupies %d bytes of space \n",sizeof(name));
    printf("height occupies %d bytes of space \n\n",sizeof(height));


}


