// Single File Programming Question

// Problem Statement




// In a corporate office, HR wants to implement a program to input an employee's ID and salary. Your task is to assist him in using pointers to efficiently manage and print the employee details, displaying the ID and salary for accurate record-keeping.

// Input format :

// The first line of input consists of an integer, representing the employee ID.

// The second line consists of a float value, representing the salary of the employee.

// Output format :

// The first line of output prints "ID: " followed by the employee ID, as an integer.

// The second line prints "Salary: " followed by the salary of the employee, as a float value, rounded off to two decimal places.




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 101 ≤ employee ID ≤ 1000

// 20000.00 ≤ salary ≤ 50000.00

// Sample test cases :
// Input 1 :
// 101 
// 20000.75
// Output 1 :
// ID: 101
// Salary: 20000.75
// Input 2 :
// 520
// 49575.5
// Output 2 :
// ID: 520
// Salary: 49575.50
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <stdio.h>

void print(int *empid,float *salary);

int main(){
    int empid;
    float salary;
    scanf("%d",&empid);
    scanf("%f",&salary);
    printf("ID: %d\nSalary: %.2f",empid,salary);
}