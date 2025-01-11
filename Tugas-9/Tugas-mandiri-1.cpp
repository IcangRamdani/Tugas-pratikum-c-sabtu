#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, found = 0;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("Array: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            if (!found) {
                printf("ADA\nLokasi bilangan yang sama: ");
            }
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("TIDAK ADA");
    }

    printf("\n");
    return 0;
}

