#include <stdio.h>
#include <math.h>

int main() {
    const double R = 8.314;
    double P, L, T;
    scanf("%lf %lf %lf", &P, &L, &T);
    double V = pow(L, 3);
    double n = (P * V) / (R * T);
    printf("%.4e", n);
    return 0;
}