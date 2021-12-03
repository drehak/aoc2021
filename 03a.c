#include <stdio.h>

int main() {
    char s[13];  // might be too short for your input
    unsigned n, e = 0, g = 0;
    int i;

    scanf("%s%n", s, &n);

    int a[n];
    for (i = 0; i < n; i++) {
        a[i] = (s[i] == '1') ? 1 : -1;
    }

    while (scanf("%s", s) == 1) {
        for (i = 0; i < n; i++) {
            a[i] += (s[i] == '1') ? 1 : -1;
        }
    }

    for (i = 0; i < n; i++) {
        e = e << 1 | (a[i] > 0 ? 1 : 0);
        g = g << 1 | (a[i] > 0 ? 0 : 1);
    }

    printf("%u\n", e * g);
}
