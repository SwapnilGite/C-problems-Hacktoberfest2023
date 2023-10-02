#include <stdio.h>

int main() {
    int i;

    // Using a while loop
    i = 1;
    while (i <= 10) {
        if (i == 5) {
            printf("Breaking the while loop at i = 5\n");
            break;
        }
        printf("While loop: i = %d\n", i);
        i++;
    }

    // Using a do-while loop
    i = 1;
    do {
        if (i == 5) {
            printf("Breaking the do-while loop at i = 5\n");
            break;
        }
        printf("Do-while loop: i = %d\n", i);
        i++;
    } while (i <= 10);

    // Using a for loop
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the for loop at i = 5\n");
            break;
        }
        printf("For loop: i = %d\n", i);
    }

    return 0;
}
