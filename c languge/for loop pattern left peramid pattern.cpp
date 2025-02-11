#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 5; i >= 1; i--) {  // Loop for number of rows
        for(j = 1; j <= i; j++) {  // Loop for printing stars
            printf("*");
        }
        printf("\n");  // Move to the next line after printing stars
    }
    
    return 0;
}

