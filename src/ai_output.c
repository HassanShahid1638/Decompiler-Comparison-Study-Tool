#include <stdio.h>
#include <string.h>

void login() {
    // The AI identifies these hex values as the string "P@ssw0rd2026"
    char secret_password[] = "P@ssw0rd2026"; 
    char user_input[24]; // Calculated from stack offset -0x17

    printf("Enter password: ");
    
    // VULNERABILITY FOUND: The assembly uses the 'gets' function
    gets(user_input); 

    // Comparing user input to the hardcoded secret
    if (strcmp(user_input, secret_password) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }
}