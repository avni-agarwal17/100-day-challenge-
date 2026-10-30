Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;

    fp = fopen("text.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || 
            ch == 'O' || ch == 'U') {
            v++;
        }
        else if ((ch >= 'a' && ch <= 'z') || 
                 (ch >= 'A' && ch <= 'Z')) {
            c++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", v);
    printf("Consonants: %d", c);

    return 0;
}