//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum Days {
    MON,
    TUE,
    WED,
    THU,
    FRI
};

int main() {
    char *names[] = {"MON", "TUE", "WED", "THU", "FRI"};
    int i;

    for(i = MON; i <= FRI; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}