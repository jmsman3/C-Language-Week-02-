#include <stdio.h>

int main() {
    int n;
    // Prompt the user to enter an integer and store it in 'n'
    scanf("%d", &n);

    if (n > 0) {
        // If 'n' is positive, enter this block
        for (int i = 1; i <= n; i++) {
            // Start a loop from 1 to 'n', incrementing 'i' by 1 in each iteration
            printf("%d", i);
            // Print the current value of 'i' (integer) to the console

            if (i < n) {
                // If 'i' is not the last number in the sequence
                printf(" ");
                // Print a space to separate numbers
            }
        }
        // End of loop
    }
    else {
        // If 'n' is not positive (zero or negative), enter this block
        for (int i = n; i <= 0; i++) {
            // Start a loop from 'n' down to 0, decrementing 'i' by 1 in each iteration
            printf("%d", i);
            // Print the current value of 'i' (integer) to the console

            if (i < 0) {
                // If 'i' is not the last number in the sequence
                printf(" ");
                // Print a space to separate numbers
            }
        }
        // End of loop
    }

    return 0;
}
