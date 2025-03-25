#include <stdio.h>
#include <conio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    clrscr();

    // Input the position of the Fibonacci number
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The %dth Fibonacci number is: %d\n", n, first);
    } else if (n == 2) {
        printf("The %dth Fibonacci number is: %d\n", n, second);
    } else {
        for (i = 3; i <= n; i++) {
            next = first + second; // Calculate the next Fibonacci number
            first = second;        // Update the first number
            second = next;         // Update the second number
        }
        printf("The %dth Fibonacci number is: %d\n", n, second);
    }
    getch();
    return 0;
}
