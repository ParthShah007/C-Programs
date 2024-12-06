#include <stdio.h>
#include <math.h> // For the pow() function if needed

int main() {
    double x, sum = 0.0, term;
    int n, sign = 1;

    // Take input from the user
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the series up to the nth term
    for (int i = 1; i <= n; i += 2) {
        // Calculate x^i
        double power = 1.0;
        for (int j = 0; j < i; j++) {
            power *= x;
        }

        // Calculate i!
        double factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Calculate the term and add/subtract it from the sum
        term = power / factorial;
        sum += sign * term;

        // Alternate the sign for each term
        sign = -sign;
    }

    // Output the result
    printf("The value of the series sin(x) up to %d terms is: %lf\n", n, sum);

    return 0;
}



