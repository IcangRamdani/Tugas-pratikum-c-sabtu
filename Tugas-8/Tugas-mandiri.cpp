#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int A[11];
    int i, j;

    // Program a: Semua data kecuali 999
    printf("Program (a):\n");
    j = 0;
    for (i = 0; data[i] != 999 && j < 11; i++) {
        A[j] = data[i];
        j++;
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Program b: Data lebih besar dari 9
    printf("Program (b):\n");
    j = 0;
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] > 9) {
            A[j] = data[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Program c: Data lebih besar dari 9
    printf("Program (c):\n");
    j = 0;
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] > 9) {
            A[j] = data[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Program d: Data bernilai ganjil
    printf("Program (d):\n");
    j = 0;
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] % 2 != 0) {
            A[j] = data[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Program e: Data ganjil
    printf("Program (e):\n");
    j = 0;
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] % 2 != 0) {
            A[j] = data[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

