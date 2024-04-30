#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

// Function to compare two Person structures
int comparePersons(struct Person p1, struct Person p2) {
    // Compare name
    if (strcmp(p1.name, p2.name) != 0)
        return 0; // Names are different
    
    // Compare age
    if (p1.age != p2.age)
        return 0; // Ages are different
    
    // If all members are the same, return 1
    return 1;
}

int main() {
    // Declare two structure variables
    struct Person person1 = {"John", 30};
    struct Person person2 = {"John", 30};

    // Compare the two structure variables
    if (comparePersons(person1, person2))
        printf("The two persons are the same.\n");
    else
        printf("The two persons are different.\n");

    return 0;
}
