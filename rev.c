#include <stdio.h>

void rev(){
    int num, reversed = 0, remainder;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversed = reversed * 10 + remainder;  // Add the digit to the reversed number
        num /= 10;  // Remove the last digit from the original number
    }

    // Output the reversed number
    printf("Reversed number is: %d\n", reversed);

//    return 0;
}

