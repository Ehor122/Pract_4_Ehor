#include <stdio.h>

int main() {
    int n;
    printf("Enter the positive integer n: ");
    scanf("%d", &n);

    int count = 0;
    for (int m = 1; m < n; m++) {
        if (n % (m + 1) == 0) {
            int q = n / (m + 1);
            if (q == n % m) {
                count++;
            }
        }
    }

    printf("Number of equal divisors: %d\n", count);
    return 0;
}
