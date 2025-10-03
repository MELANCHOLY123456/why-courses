#include <stdio.h>
#include <math.h>

int main() {
    double pi_01 = 4.0 * (4.0 * atan(1.0 / 5.0) - atan(1.0 / 239.0));
    double pi_02 = log(pow(640320.0, 3) + 744.0) / sqrt(163.0);
    printf("%.15lf\n", pi_01);
    printf("%.15lf\n", pi_02);
    return 0;
}