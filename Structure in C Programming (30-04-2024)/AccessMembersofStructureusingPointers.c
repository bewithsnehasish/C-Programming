#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a structure variable
    struct Person person = {"John", 30};

    // Declare a pointer to a structure
    struct Person *ptrPerson;

    // Assign the address of the structure variable to the pointer
    ptrPerson = &person;

    // Access structure members using the pointer
    printf("Name: %s\n", ptrPerson->name);
    printf("Age: %d\n", ptrPerson->age);

    return 0;
}
q