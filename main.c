#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mylib/mylib.h"

void red() {
    printf("\033[0;31m");
}

void yellow() {
    printf("\033[0;33m");
}

void reset() {
    printf("\033[0m");
}

int main(void) {
    int s0 = 0, s1 = 0, b, o0 = 0;
    while (true) {
        printf("Bulb: ");
        if (o0 == 0) {
            red();
            printf("OFF\n");
        } else {
            yellow();
            printf("ON\n");
        }
        reset();

        printf("Enter button input (0 for not pushing button // 1 for pushing button): ");
        scanf("%d", &b);

        if (b == 0 || b == 1) {
            states(s0, s1, o0, b, &s0, &s1, &o0);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }

    return 0;
}