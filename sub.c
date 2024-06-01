// Read The Marks Of 5 Subjects Display Total And Average

#include <stdio.h>
main()
{
    int eng , sans , math , phy , chy  ;

    float  avg, tot;

    eng = sans = math = phy = chy = tot = avg = 0;

    printf("Enter Your English marks : ");
    scanf("%d",&eng);

    printf("Enter Your Sanskrit marks : ");
    scanf("%d",&sans);

    printf("Enter Your Maths Marks : ");
    scanf("%d",&math);

    printf("Enter Your Physics Marks : ");
    scanf("%d",&phy);

    printf("Enter Your Chemistry Marks : ");
    scanf("%d",&chy);

    tot = eng + sans + math + phy + chy ;

    avg = tot/5.0;

    printf("\nYour Total Marks : %.0f\n",tot);
    printf("\nThe Average Of Your Total Marks : %.2f\n\n",avg);

}
