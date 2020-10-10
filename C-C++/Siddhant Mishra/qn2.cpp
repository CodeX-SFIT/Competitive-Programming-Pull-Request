#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Euclid Algorithm for GCD
// When remainder is zero the remainder previous to is the GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b, g;

    printf("Enter elements:");
    scanf("%d %d", &a, &b);

    g = gcd(b, a);

    printf("\nGCD: %d", g);

    return 0;
}