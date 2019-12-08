#include<stdio.h>

void user_function_1()
 {
 printf(("Dear User, Welcome to my User Function!\n"););
 //user_function_1();
 }

void user_function_2();

void main()
 {
 user_function_1();
 user_function_1();
 user_function_2();
 }

void user_function_2()
 {
 user_function_1();
 }
