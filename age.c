#include <stdio.h>
int main() {
    int age=50;
    if ( age<13){
        printf("person is child\n");
    }
    else if(age>=13 && age<=19){
        printf("person is teenager");
    }
    else if(age>=20 && age<=59) {
        printf("person is Adult");
    }
    else if(age>=60) {
        printf("person is senior");

    }
    return 0;
}

