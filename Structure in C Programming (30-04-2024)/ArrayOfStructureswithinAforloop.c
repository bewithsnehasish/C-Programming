#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Define an array of structures
    struct Student students[3];

    // Input data for each student using a loop
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display data for each student
    printf("Details of all students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
