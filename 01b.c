#include <stdio.h>

int main() {
    unsigned a = -1, b = -1, c = -1, d, s = 0;
    while (scanf("%u", &d) == 1) {
        if (d > a) s++;
        a = b;
        b = c;
        c = d;
    }
    printf("%u\n", s);
}
