#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Non-Prime\n");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Non-Prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}

