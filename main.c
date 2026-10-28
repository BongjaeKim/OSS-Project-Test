#include <stdio.h>

int login(void);

int main()
{
  int logged_in;

  printf("Open Source SW Project\n");
  printf("First GitHub Training\n");

  logged_in = login();
  if (logged_in)
  {
    printf("Login successful.\n");
  }
  else
  {
    printf("Login failed.\n");
  }

  return 0;
}
