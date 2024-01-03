#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Print values at odd indexes in reverse order
    for (int i = n - 1 - (n % 2); i >= 1; i -= 2) {
        printf("%d ", ar[i]);
    }

    if (n % 2 == 0) {
        printf("%d", ar[0]);
    }

    return 0;
}
