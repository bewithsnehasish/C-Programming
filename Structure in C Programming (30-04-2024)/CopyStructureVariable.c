#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare two structure variables
    struct Person person1, person2;

    // Input data into person1
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);

    // Copying data from person1 to person2
    strcpy(person2.name, person1.name);
    person2.age = person1.age;

    // Displaying data of person2
    printf("\nData of person2:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);

    return 0;
}
