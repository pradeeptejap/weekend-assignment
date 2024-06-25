#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, rem, nume, den;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    nume = num1;
    den = num2;

    while (den != 0) {
        rem = nume % den;
        nume = den;
        den = rem;
    }
    gcd = nume;

    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
