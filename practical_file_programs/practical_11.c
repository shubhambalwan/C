#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int n, i;

    // Create a file and write student records
    fp = fopen("students.txt", "w");

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter name: ");
        scanf("%s", s.name);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    // Read and display student records
    fp = fopen("students.txt", "r");

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) == 3) {
        printf("\nRoll Number: %d", s.roll);
        printf("\nName: %s", s.name);
        printf("\nMarks: %.2f\n", s.marks);
    }

    fclose(fp);

    // Append new student records
    fp = fopen("students.txt", "a");

    printf("\nEnter the number of new students to append: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter name: ");
        scanf("%s", s.name);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    // Display updated records
    fp = fopen("students.txt", "r");

    printf("\n--- Updated Student Records ---\n");

    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) == 3) {
        printf("\nRoll Number: %d", s.roll);
        printf("\nName: %s", s.name);
        printf("\nMarks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}