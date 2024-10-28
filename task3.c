#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int grid[SIZE][SIZE] = {0};
    int xt, yt;

    srand(time(NULL));
    xt = rand() % SIZE;
    yt = rand() % SIZE;

    grid[xt][yt] = 1;

    printf("Treasure Grid:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grid[i][j] == 1) {
                printf(" T ");
            } else {
                printf(" . ");
            }
        }
        printf("\n");
    }

    printf("\nSearching for the treasure...\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grid[i][j] == 1) {
                printf("Hurrah!, I have found the hidden treasure at (%d, %d)\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}

