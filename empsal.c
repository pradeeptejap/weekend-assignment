// To Calculate The Employee Gross salary And Net Salary

#include <stdio.h>
main()
{
  int bs ;
  float gs , ns , pf , hra , da;

  gs = ns = pf = hra = da = 0;

  printf("Enter The Employee's Base Salary : ");
  scanf("%d",&bs);

  hra = 0.2 * bs;
  da = 0.1 * bs;
  pf = 0.05 * bs;
  gs = bs + hra + da ;
  ns = gs - pf;

  printf("\n Gross Salary Of The Employee Is : %.0f \n",gs);
  printf("\n Net Salary Of The Employee Is : %.0f \n",ns);
}

