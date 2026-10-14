#include <stdio.h>

// This is a simple login program that prompts the user for a username and password.
int main() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // For demonstration purposes, we will just print the entered credentials.
    // In a real application, you would validate these credentials against a database or other secure storage.
    printf("Username: %s\n", username);
    printf("Password: %s\n", password);

    return 0;
}