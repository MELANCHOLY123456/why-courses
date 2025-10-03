#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// 将弧度转换为角度
double radians_to_degrees(double radians) {
    return radians * 180.0 / PI;
}

// 将角度标准化到0-360度范围
double normalize_angle(double angle) {
    while (angle < 0) angle += 360.0;
    while (angle >= 360) angle -= 360.0;
    return angle;
}

int main() {
    double x1, y1, x2, y2;
    
    // 读取两个点的坐标
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    // 计算距离
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);
    
    // 计算方位角（以度为单位）
    double azimuth;
    
    if (dx == 0 && dy == 0) {
        // 两点重合，方位角未定义，设为0
        azimuth = 0;
    } else {
        // 计算方位角（从正北方向顺时针测量）
        azimuth = radians_to_degrees(atan2(dx, dy));
        azimuth = normalize_angle(azimuth);
    }
    
    // 输出距离和方位角，保留4位小数
    printf("%.4lf %.4lf\n", distance, azimuth);
    
    return 0;
}

/*atan2 是 C 语言标准库 <math.h> 中的一个函数，用于计算两点之间的方位角（以弧度为单位）。
*/