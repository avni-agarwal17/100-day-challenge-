//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];
    int i;

    for(i = 1; i < n; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[3], top;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Name, Roll and Marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = findTop(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}