//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p = {"Avni", FEMALE};

    printf("Name: %s\n", p.name);

    if(p.gender == MALE)
        printf("Gender: Male");
    else
        printf("Gender: Female");

    return 0;
}