#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int res_01 = input / 50;
    input %= 50;
    int res_02 = input / 20;
    input %= 20;
    int res_03 = input / 10;
    input %= 10;
    int res_04 = input / 5;
    input %= 5;
    int res_05 = input;
    printf("%d\n%d\n%d\n%d\n%d\n", res_01, res_02, res_03, res_04, res_05);
    return 0;
}
