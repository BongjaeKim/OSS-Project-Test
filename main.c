#include <stdio.h>
#include "login.c" // Include the login.c file to access the login function

int main()
{
  printf("Open Source SW Project\n");
  printf("First GitHub Training\n");
  // call the login function from login.c
  login();
  visualize();
  return 0;
}
