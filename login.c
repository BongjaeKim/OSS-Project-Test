#include <stdio.h>
#include <string.h>

static int read_line(const char *prompt, char *buffer, size_t buffer_size)
{
  size_t length;
  int character;

  printf("%s", prompt);
  if (fgets(buffer, (int)buffer_size, stdin) == NULL)
  {
    return 0;
  }

  length = strcspn(buffer, "\n");
  if (buffer[length] == '\n')
  {
    buffer[length] = '\0';
    return 1;
  }

  if (!feof(stdin))
  {
    while ((character = getchar()) != '\n' && character != EOF)
    {
    }
    return 0;
  }

  return 1;
}

int login(void)
{
  char username[64];
  char password[64];

  if (!read_line("Username: ", username, sizeof(username)) ||
      !read_line("Password: ", password, sizeof(password)))
  {
    printf("Invalid input.\n");
    return 0;
  }

  if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0)
  {
    return 1;
  }

  return 0;
}
