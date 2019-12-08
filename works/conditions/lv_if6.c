#include <stdio.h>
#include <time.h>
void main ()
 {
 int number;
 clock_t start_t, end_t, total_t;
 printf ("Dear user, please enter a number: ");
 scanf ("%d", & number);
 start_t = clock ();
 if ((number% 2) == 0)
  printf ("Your number%d is a pair number\n", number);
 else
  printf ("Your number %d is an odd number\n", number);
 end_t = clock ();
// total_t = (double) (end_t - start_t) / CLOCKS_PER_SEC;
 printf ("Calculation with %c and ==0 takes%ld to %ld -> %ld\n", 37, start_t, end_t, end_t-start_t);
 start_t = clock ();
 if (number% 2)
  printf ("Your number %d is an odd number\n", number);
 else
  printf ("Your number %d is a pair number\n", number);
 end_t = clock ();
 printf ("Calculation with %c without ==0 takes %ld to %ld -> %ld\n", 37, start_t, end_t, end_t-start_t);
 start_t = clock ();
 if ((number << 31) >> 31)
  printf ("Your number% d is an odd number\n", number);
 else
  printf ("Your number% d is a pair number\n", number);
 end_t = clock ();
 printf ("Calculation with << and >> occupied between %ld and %ld -> %ld\n", start_t, end_t, end_t-start_t);
 }
