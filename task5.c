#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int rgb[SIZE][SIZE][3];
    int grayscale[SIZE][SIZE];

    srand(time(NULL));

    printf("Original RGB Values:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            rgb[i][j][0] = rand() % 256;
            rgb[i][j][1] = rand() % 256;
            rgb[i][j][2] = rand() % 256;
            printf("(%3d, %3d, %3d) ", rgb[i][j][0], rgb[i][j][1], rgb[i][j][2]);
        }
        printf("\n");
    }

    printf("\nGrayscale Values:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grayscale[i][j] = (int)(0.299 * rgb[i][j][0] + 0.587 * rgb[i][j][1] + 0.114 * rgb[i][j][2]);
            printf("%3d ", grayscale[i][j]);
        }
        printf("\n");
    }

    return 0;
}

