#include <stdio.h>

int main() {
    unsigned h = 0, d = 0, n;
    char* s;
    while (scanf("%s%u", s, &n) == 2) {
        switch (s[0]) {
        case 'f':
            h += n;
            break;
        case 'd':
            d += n;
            break;
        case 'u':
            d = (d > n) ? (d - n) : 0;
        }
    }
    printf("%u\n", h * d);
}
