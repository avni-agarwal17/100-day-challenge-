//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[20];
    int roll, marks, i;

    fp = fopen("student.txt", "w");

    for(i = 0; i < 2; i++)
    {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    for(i = 0; i < 2; i++)
    {
        fscanf(fp, "%s %d %d", name, &roll, &marks);
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}