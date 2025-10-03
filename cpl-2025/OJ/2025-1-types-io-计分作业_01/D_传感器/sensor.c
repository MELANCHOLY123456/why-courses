#include <stdio.h>
#include <ctype.h>

int main() {
    char name[21]; // 最多可以存储20个字符加上一个空字符\0
    int pre;
    double frac;
    double factor;
    char unit;

    // %20s：读取一个字符串，最多读取20个字符，防止数组越界
    // %lf：读取一个双精度浮点数
    scanf("%20s %d %lf %lf %c", name, &pre, &frac, &factor, &unit);

    printf("%.*s: ", 2, name); // 输出name的前两个字符
    printf("%d ", pre);
    printf("(%.5lf) ", frac); // 输出浮点数frac，保留5位小数

    double total = pre + frac;
    printf("| %.5lE ", total); // 以科学计数法输出total，保留5位小数

    double converted = total * factor;
    printf("%.5lf ", converted);

    printf("%c\n", toupper(unit)); // 将unit转换为大写字母后输出
    return 0;
}
