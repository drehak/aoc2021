#include <stdio.h>

int main() {
    unsigned a = -1, b, s = 0;
    while (scanf("%u", &b) == 1) {
        if (b > a) s++;
        a = b;
    }
    printf("%u\n", s);
}
