#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 6; i <= 100; i += 2) {
        sum += i;
    }

    printf("The sum of 6 + 8 + 10 + 12 ... + 100 is equal to %d\n", sum);

    return 0;
}

