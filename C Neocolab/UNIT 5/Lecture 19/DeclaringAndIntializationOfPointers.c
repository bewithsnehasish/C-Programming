// Single File Programming Question
// Problem Statement


// A time traveller needs to input the temporal coordinates (month, day, year, hour, minute) into a time-travel device. Help him design a program using pointers to efficiently capture and display the entered coordinates in the desired format.

// Input format :
// The input consists of five space-separated integers: the month, day, year, hour, and minutes of a temporal coordinate.

// Output format :
// The output prints the temporal coordinate in the format: 'YYYY-MM-DD HH:MM', where YYYY is the year, MM is the month, DD is the day, HH is the hour, and MM is the minutes.

// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ month ≤ 12

// 1 ≤ day ≤ 31

// 2020 ≤ year ≤ 2030

// 0 ≤ hour ≤ 23

// 0 ≤ minutes ≤ 59

// Sample test cases :
// Input 1 :
// 1 15 2023 9 30
// Output 1 :
// 2023-01-15 09:30
// Input 2 :
// 12 5 2030 18 45
// Output 2 :
// 2030-12-05 18:45
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
// Marks : 10
// Negative Marks : 0
// ￼
// Whitelist
// Set 1: *
// Set 2: &



#include <stdio.h>

void printchar(int *month,int *day,int *year,int *hours, int *minutes){
     printf("%04d-%02d-%02d %02d:%02d",*year,*month,*day,*hours,*minutes);
}

int main(){
    int month,day,year,hours,minutes;
    scanf("%d %d %d %d %d",&month,&day,&year,&hours,&minutes);
    printchar(&month,&day,&year,&hours,&minutes);
}