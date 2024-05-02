// Single File Programming Question

// Problem Statement




// Develop a straightforward software application to assist Balwinder Singh in managing the details of LIC agents. The program should facilitate the entry of key information such as the agent's name, their geographical location, and the names of their respective customers. Additionally, it must provide a functionality to display these details efficiently, serving the purpose of record-keeping and management within LIC.		




// Your task is to create a program that takes this input and displays the information in a structured format.

// Input format :

// The first line of input consists of the string, representing the LIC agent's name.

// The second line of input consists of the string, representing the LIC agent's location.

// The third line of input consists of an integer N, representing the total number of customers.

// The next n lines of input consist of the string, representing the customer's name for each customer.

// Output format :

// The output displays the LIC agent details in the following format:

// "LIC Agent Details:

// [Agent's Name]

// [Agent's Location]

// Total Number of Customers: [Total Customers]

// Names of Customers:

// [Customer 1 Name]

// [Customer 2 Name]

// ...

// [Customer N Name]"




// Refer to the sample output for the formatting specifications.

// Code constraints :

// In this scenario, the test cases will fall under the following constraints:

// The agent's name and location will have a maximum length of 50 and 100 characters, respectively.

// 1 <= N <= 10

// Each customer's name will have a maximum length of 50 characters.

// Sample test cases :
// Input 1 :
// Kiranbir Kaur
// Amritsar
// 3
// Jaspreet Singh
// Harleen Kaur
// Gurinder Singh
// Output 1 :
// LIC Agent Details:
// Kiranbir Kaur
// Amritsar
// 3
// Names of Customers:
// Jaspreet Singh
// Harleen Kaur
// Gurinder Singh
// Input 2 :
// Navjot Kaur
// Hoshiarpur
// 10
// Jaspreet Singh
// Harleen Kaur
// Gurinder Singh
// Navjot Kaur
// Rajdeep Singh
// Simranjeet Kaur
// Amanpreet Singh
// Kiranbir Kaur
// Manpreet Singh
// Harmandeep Kaur
// Output 2 :
// LIC Agent Details:
// Navjot Kaur
// Hoshiarpur
// 10
// Names of Customers:
// Jaspreet Singh
// Harleen Kaur
// Gurinder Singh
// Navjot Kaur
// Rajdeep Singh
// Simranjeet Kaur
// Amanpreet Singh
// Kiranbir Kaur
// Manpreet Singh
// Harmandeep Kaur
// Input 3 :
// Balwinder Singh
// Mohali
// 1
// Navjot Kaur
// Output 3 :
// LIC Agent Details:
// Balwinder Singh
// Mohali
// 1
// Names of Customers:
// Navjot Kaur
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <stdio.h>
#include <string.h>

int main() {
    char agent_name[51], agent_location[101], customer_names[11][51];
    int num_customers, i;

    fgets(agent_name, sizeof(agent_name), stdin);
   

    fgets(agent_location, sizeof(agent_location), stdin);
 
    scanf("%d", &num_customers);

    for (i = 0; i < num_customers; i++) {
        scanf(" %50[^\n]", customer_names[i]); 
    }

    // Print the LIC agent details
    printf("LIC Agent Details:\n");
    printf("%s%s", agent_name, agent_location);
    printf("%d\n", num_customers);
    printf("Names of Customers:\n");

    for (i = 0; i < num_customers; i++) {
        printf("%s\n", customer_names[i]);
    }

    return 0;
}