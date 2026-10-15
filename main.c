#include <stdio.h>
#include "login.c" // Include the login.c file to access the login function

int main()
{
  printf("Open Source SW Project\n");
  printf("First GitHub Training\n");
  visualize();
  // call the login function from login.c
  login();
  // call the login_with_encrypted_password function from login.c
  login_with_encrypted_password();
  login_with_encrypted_password();
  return 0;
}
