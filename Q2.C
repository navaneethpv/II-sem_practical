#include <stdio.h>

int main() {
    int num, sum = 0, rev = 0, digit;
    int org;
    clrscr();

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;
    // Calculate the sum of digits
    while (num > 0) {
	digit = num % 10; // Extract the last digit
	sum += digit;     // Add it to the sum
	num /= 10;        // Remove the last digit
    }

    num = org; // Restore the original number for reverse calculation

    // Calculate the reverse of the number
    while (num > 0) {
	digit = num % 10;        // Extract the last digit
	rev = rev * 10 + digit; // Build the reverse number
	num /= 10;               // Remove the last digit
    }

    // Display the results
    printf("Sum of digits: %d\n", sum);
    printf("Reverse of the number: %d\n", rev);
    getch();
    return 0;
}
