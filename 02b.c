#include <stdio.h>

int main() {
    unsigned h = 0, d = 0, n;
    int a = 0;
    char* s;
    while (scanf("%s%u", s, &n) == 2) {
        switch (s[0]) {
        case 'f':
            h += n;
            int da = n * a;
            d = (da + d > 0) ? (da + d) : 0;
            break;
        case 'd':
            a += n;
            break;
        case 'u':
            a -= n;
        }
    }
    printf("%u\n", h * d);
}
