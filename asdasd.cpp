#include <stdio.h>

void main()

{    

       int dd, mm, yy;    /* given date */

       int valid;             /* flag to indicate date validity */

       clrscr();

       printf(“Enter date as dd/mm/yyyy: “);

       scanf(“%d/%d/%d”, &dd, &mm, &yy);

              /* determine validity of given date */

       valid = 0;

       if (yy != 0)      /* check year */

         {

               if (mm >= 1 && mm <= 12)  /* check month */

                  {  

                       /* determine number of days in given month */

                       int mdays;

                       if (mm == 2)

                           mdays = (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0) ? 29 : 28;

                      else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)

                                mdays = 30;

                      else mdays = 31;

                      if (dd >= 1 && dd <= mdays)

                         valid = 1;

                  }

          }

                      printf (“Date is %s\n”, valid ? “valid” : “invalid”);

                            

                               getch();

}
