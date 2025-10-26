#include <stdio.h>

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;  // Initialize sum to 0

    // Loop until the number becomes 0
    while (n > 0) {
        // Add the last digit of n to sum
        sum += n % 10;

        // Remove the last digit from n
        n = n / 10;
    }

    return sum;  // Return the sum of digits
}

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the digitSum function and print the result
    printf("Sum of digits of %d is: %d\n", number, digitSum(number));

    return 0;
}
