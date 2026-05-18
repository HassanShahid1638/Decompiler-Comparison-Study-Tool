#include <stdio.h>
#include <string.h>

void login() {
    char secret[] = "P@ssw0rd2026"; // Hardcoded secret
    char input[10];
    printf("Enter password: ");
    gets(input); // VULNERABILITY: Buffer Overflow

    if (strcmp(input, secret) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }
}

int main() {
    login();
    return 0;
}