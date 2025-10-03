#include <stdio.h>
#include <math.h>

int main() {
    double t1 = 236674.0 + 30303.0 * sqrt(61.0);
    double pi_01 = log(pow(5280.0, 3) * pow(t1, 3) + 744.0) / sqrt(427.0);
    double pi_02 = 4 * (6 * atan(1.0 / 8.0) + 2 * atan(1.0 / 57.0) + atan(1.0 / 239.0));
    printf("%.15f\n", pi_01);
    printf("%.15f\n", pi_02);
    return 0;
}

/*log 函数是自然对数函数，它在数学和编程中非常常见。自然对数是以数学常数 e（约等于 2.71828）为底的对数。
atan 函数是反正切函数（arctangent function），它用于计算一个数的反正切值（以弧度为单位），即给定一个数 y，返回其正切值为 y 的角度。
*/