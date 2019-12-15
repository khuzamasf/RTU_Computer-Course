#include <stdio.h>
void user_function_3 (int i_uf)
  {
  printf ("Dear user, Welcome to my user function% d time! \n", i_uf);
  }

void user_function_4 (int i_uf, double d_uf);

void main ()
  {
  int i_main = 0, N = 5;
  while (i_main <N)
   {
   i_main ++;
   user_function_3 (i_main);
   // user_function_4 (i_main, (double) i_main / N);
   user_function_4 (i_main, 1. * i_main / N); // time issue - TIC TOC
   }
  }

void user_function_4 (int i_uf, double d_uf) // these i_uf and d_uf are only associated with function 4
  {
  printf ("Simply count:% d times, so% .2f part (s)! \n", i_uf, d_uf);
  }
