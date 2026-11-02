//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

int main() {
    char days[7][10] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    int i;

    for(i = 0; i < 7; i++) {
        printf("%s = %d\n", days[i], i);
    }

    return 0;
}