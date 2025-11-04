
#include <stdio.h>

float computeAverage(int* x, int size_t) {
    int sum = 0.0;
//    float denominator = 0.0;
    if (size_t <= 0) {
        return 0;
    }

    for (int i = 0; i < size_t; i++) {
        sum += x[i];
    }
    return (float)sum/size_t;
}

int main()//int argc, char** argv)
{
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_t = 10;
    float average = computeAverage(x, size_t);
    printf("The average is : %.3f\n",average);
    return 0;
}
