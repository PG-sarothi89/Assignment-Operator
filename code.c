#include <stdio.h>

// all assignmenrt operators
//  =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
int main()
{
    int a = 10;
    int b = 20;
    int c = 0;

    c = a + b; // simple assignment operator
    printf("Value of c = %d\n", c);

    c += a; // c = c + a
    printf("Value of c after += is %d\n", c);

    c -= a; // c = c - a
    printf("Value of c after -= is %d\n", c);

    c *= a; // c = c * a
    printf("Value of c after *= is %d\n", c);

    c /= a; // c = c / a
    printf("Value of c after /= is %d\n", c);

    c %= a; // c = c % a
    printf("Value of c after %%= is %d\n", c);

    c <<= 2; // c = c << 2
    printf("Value of c after <<= is %d\n", c);

    c >>= 2; // c = c >> 2
    printf("Value of c after >>= is %d\n", c);

    c &= 2; // c = c & 2
    printf("Value of c after &= is %d\n", c);

    c ^= 2; // c = c ^ 2
    printf("Value of c after ^= is %d\n", c);

    c |= 2; // c = c | 2
    printf("Value of c after |= is %d\n", c);

    return 0;
    // Output:
    // Value of c = 30
}