#include <stdio.h>

int main() {
    const double G = 6.674e-11;
    const double M = 77.15;
    double m;
    double R;
    scanf("%lf", &m);
    scanf("%lf", &R);
    double F = (G * M * m) / (R * R);
    printf("%.3e\n", F);
    return 0;
}