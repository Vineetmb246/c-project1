#include <stdio.h>

void fact() {
    int num, i;
    long long factorial = 1;  // Using long long to store large results

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;  // Multiply factorial by i in each iteration
        }
        
        // Output the result
        printf("Factorial of %d is: %lld\n", num, factorial);
    }

   // return 0;
}

