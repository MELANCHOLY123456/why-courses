#include <stdio.h>
#include <math.h>

int main() {
    int p, q;
    scanf("%d %d", &p, &q);
    double q2 = -q / 2.0;
    double D = q2 * q2 + (p / 3.0) * (p / 3.0) * (p / 3.0);
    double sqrtD = sqrt(D);
    double x1 = cbrt(q2 + sqrtD) + cbrt(q2 - sqrtD);
    printf("%.3lf\n", x1);
    return 0;
}

/* cbrt 是一个数学函数，用于计算一个数的立方根（cube root）。
使用 cbrt 而不是 pow(x, 1/3) 的好处是，cbrt 函数在某些编程环境中可能更精确，尤其是在处理浮点数时。
此外，cbrt 函数在数学上更直观，因为它直接表示了求立方根的操作。
*/