// Single File Programming Question

// Problem Statement




// Raju requires a program that prompts him to enter his name, ticket price, and travel destination. The program should then verify the availability of the chosen destination. 




// If the destination is Delhi, the program should display a message indicating its unavailability. For all other destinations, the program should print Raju's details, including his name, ticket price, and destination.

// Input format :

// The first line of input consists of the string, representing the Passenger's name.

// The second line of input consists of a double, representing the ticket price.

// The third line of input consists of the string, and destination location.

// Output format :

// The output displays the following passenger information:

// Name: [Passenger's Name]

// Ticket Price: Rs. [Ticket Price]

// Destination Location: [Destination Location]




// If the destination is Delhi, print "Sorry, Delhi is not available as a destination".




// Refer to the sample output for the formatting specifications.

// Code constraints :

// In this scenario, the test cases will fall under the following constraints

// The input string with at most 49 characters.

// 1000.00 ≤ ticket price ≤ 10000.00

// Sample test cases :
// Input 1 :
// Harpreet
// 1200.50
// Amritsar
// Output 1 :
// Passenger Information:
// Name: Harpreet
// Ticket Price: Rs. 1200.50
// Destination Location: Amritsar
// Input 2 :
// Gurpreet
// 1800.75
// Delhi
// Output 2 :
// Sorry, Delhi is not available as a destination
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <stdio.h>
#include <string.h>

int main(){
    char name[20],destination[20];float price;
    // fgets(name,20,stdin);
    scanf("%s",name);
    scanf("%f",&price);
    scanf("%s",destination);
    if(strcmp(destination,"Delhi")==0)printf("Sorry, Delhi is not available as a destination");
    else {
        printf("Passenger Information:\nName: %s\nTicket Price: Rs. %.2f\nDestination Location: %s",name,price,destination);
    }
}
