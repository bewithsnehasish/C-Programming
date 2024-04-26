#include <stdio.h>

// Function to add two numbers
float add(float *a, float *b) {
    return (*a) + (*b);
}

// Function to subtract two numbers
float subtract(float *a, float *b) {
    return (*a) - (*b);
}

// Function to multiply two numbers
float multiply(float *a, float *b) {
    return (*a) * (*b);
}

// Function to divide two numbers
float divide(float *a, float *b) {
    if (*b != 0)
        return (*a) / (*b);
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Define function pointers
    float (*operation)(float *, float *);

    // Assign function pointers to respective functions
    operation = &add;
    printf("Addition: %.2f\n", operation(&num1, &num2));

    operation = &subtract;
    printf("Subtraction: %.2f\n", operation(&num1, &num2));

    operation = &multiply;
    printf("Multiplication: %.2f\n", operation(&num1, &num2));

    operation = &divide;
    printf("Division: %.2f\n", operation(&num1, &num2));

    return 0;
}
