#include <stdio.h>

// Local Variable and it is accessible only inside the function
void local() {
    int x = 10; 
    printf("%d \n", x);
    // return 0 ;
}

// Global variable is accessible throughout the program after it is declared and if it is not updated 
int a = 10;

void global() {
    printf("Hence here is the Global variable is accessible from out %d", a);
}

int main() {
    local();   // Call to local function
    global();  // Call to global function
    return 0;
}


