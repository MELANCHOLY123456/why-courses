#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int ge = num % 10;
    int shi = num % 100 / 10;
    int bai = num / 100;
    int res = (shi * 100 + bai * 10 + ge);
    printf("%d", res);
    return 0;
}
