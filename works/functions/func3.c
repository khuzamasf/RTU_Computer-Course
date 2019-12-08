#include <stdio.h>

int user_function_5 ()
  {
  int i_uf;
  printf ("Dear user, please enter one number (5 questions will end):");
  scanf ("% d", & i_uf);
  return i_uf;
  }

void main ()
  {
  int i_main, N = 5;

  i_main = user_function_5 ();

  while (i_main! = n)
   {
   printf ("You have entered% d \n" in response to my user function actions, i_main);
   i_main = user_function_5 ();
   }
  printf ("Since you've entered 5, there are no more questions! \n");
  }
