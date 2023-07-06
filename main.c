#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, count = 0;

    // Read the number n
    scanf("%d", &n);

    // Iterate over all possible values of m from 1 to n-1
    for (m = 1; m < n; m++) {
        // Check if m is an equal divisor of n
        if (n % m == n / m) {
            count++;
        }
    }

    // Print the count of equal divisors of n
    printf("%d\n", count);

    return 0;

}
