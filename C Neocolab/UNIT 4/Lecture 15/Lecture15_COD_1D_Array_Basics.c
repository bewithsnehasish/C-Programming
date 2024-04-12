// Single File Programming Question
// Problem Statement



// Rahul manages a car service facility and wants to calculate the service charges for cars based on the time they have spent at the facility. The program takes the number of cars 'n' and the hours each car has been at the facility.



// It then calculates the service charges according to specific conditions and displays the car number, hours of service, and the corresponding charges for each car. Rahul uses this program to efficiently manage his car service operations.



// Up to 3 hours: Rs. 30.0
// Beyond 3 hours: Rs. 30.0 + (hours - 3) * Rs. 5.0
// Exactly 24 hours: Rs. 80.0
// Input format :
// The first line consists of an integer n, representing the number of cars.

// The next n lines consists of two integers, representing the car number and the number of hours that the respective car has spent at the facility.

// Output format :
// For each car, the output displays three values separated by spaces, representing the car number, the hours of service, and the corresponding service charges. The charges should be displayed in two decimal places.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 2 ≤ n ≤ 10

// 1 ≤ hours ≤ 24

// Sample test cases :
// Input 1 :
// 3
// 1867 3
// 5382 5
// 2407 24
// Output 1 :
// 1867 3 30.00
// 5382 5 40.00
// 2407 24 80.00
// Input 2 :
// 2
// 3245 1
// 7851 15
// Output 2 :
// 3245 1 30.00
// 7851 15 90.00
// Input 3 :
// 10
// 1234 4
// 1245 8
// 1456 10
// 7896 23
// 1111 12
// 2244 15
// 3247 20
// 1478 6
// 1498 10
// 3457 24
// Output 3 :
// 1234 4 35.00
// 1245 8 55.00
// 1456 10 65.00
// 7896 23 130.00
// 1111 12 75.00
// 2244 15 90.00
// 3247 20 115.00
// 1478 6 45.00
// 1498 10 65.00
// 3457 24 80.00


// You are using GCC
#include <stdio.h>

int main(){
    int noc,cn,noh;
    scanf("%d ",&noc);
    for (int i = 0; i < noc; i++){
        scanf("%d %d",&cn,&noh);
        
        float s_charge;
        if(noh <= 3)s_charge = 30.0;
        else if(noh == 24)s_charge = 80.0;
        else s_charge = 30.0 + (noh - 3) * 5.0;
        
        printf("%d %d %.2f\n",cn,noh,s_charge);
    }
    
}