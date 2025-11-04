#include <stdio.h>
#include <stdlib.h>

void printArray(int* x, int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

// void printArray(int* y, int N) {
//     for (int i = 0; i < N; i++) {
//         printf("%.3g ", y[i]);
//     }
//     printf("\n");
// }

int main() {
    int N = 20;
    int N2 = 19;
    int* x = (int*) malloc(20 * sizeof(N));
    for (int i = 0; i < N; i++) {
        x[i] = 2*(i+1);
    }
     printArray(x, N);
    free(x);
    int* y = (int*) malloc(19 * sizeof(N2));
    for (int i = 0; i < N2; i++) {
        y[i] = 0.5*(((i+1) * 2 + 2) + (i+1) * 2);
     printf("%d ", y[i]);   
    }
    // printArray(y, N2);
     printf("\n");
    return 0;
}

// Changes made:
// 1. I changed the delete[] x to free(x) so the memort would be cleared for the next array.
// 2. I allocated memory for the first and second array to be stored.
// 3. Only one print array function was needed, so I commented out one of them.
// 4. I also changed the equation for the second array to get the correct averages