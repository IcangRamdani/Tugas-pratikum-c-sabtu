#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0;

    printf("Masukkan karakter: ");
    scanf(" %c", &C);

    printf("Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\nAda sebanyak: %d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

