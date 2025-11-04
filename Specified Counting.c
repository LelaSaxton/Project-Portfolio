#include <stdio.h>
#include <stdlib.h>

int* first10ByK(int K) {
    int* x = (int*) malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        x[i] = K * (i + 1);
    }
    return x;
}

int main(int argc, char** argv) {
    int K = atoi(argv[1]);
    int* x = first10ByK(K);
    for (int i = 0; i < 10; i++) {
        printf("%i ", x[i]);
    }
    printf("\n");
    free(x);
    return 0;
}

// Changes made:
// 1. I allocated memory for x so that the function would properly return x.