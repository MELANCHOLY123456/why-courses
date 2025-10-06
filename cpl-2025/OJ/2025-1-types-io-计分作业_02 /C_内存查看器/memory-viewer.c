#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t addr, data;
    scanf("%u %u", &addr, &data);

    printf("0x%08x: ", addr);
    for (int i = 3; i >= 0; i--) {
        printf("%02x", (data >> (i * 8)) & 0xff);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}