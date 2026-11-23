//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter role: ");
    scanf("%d", &choice);

    role = choice - 1;

    switch(role) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid role");
    }

    return 0;
}