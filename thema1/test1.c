#include <stdio.h>

/* 1.4.6節 Option: 万が一 main() を抜けた場合の暴走防止措置 */
void exit(int value)
{
    for (;;) {
        ;
    }
}

int main(void)
{
    char buf[64];

    printf("=== Theme 1 Serial I/O Test ===\n");

    for (;;) {
        printf("Input string: ");
        if (scanf("%63s", buf) == 1) {
            printf("Echo: %s\n", buf);
        }
    }

    return 0;
}