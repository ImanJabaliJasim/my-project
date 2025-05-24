#include <stdio.h>
#include <string.h>

#define PASSWORD "secret123"

int main() {
    char userPass[50];

    printf("Enter the password:\n");
    gets(userPass);

    if(strncmp(userPass, PASSWORD, 9) == 0) {
        printf("PASSWORD VERIFIED\n");
    } else {
        printf("ACCESS DENIED\n");
    }

    return 0;
}
