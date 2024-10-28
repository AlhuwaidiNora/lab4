#include <stdio.h>

int main() {
    int population[10];
    int max, min;
    float average = 0.0;

    printf("Enter the population of 10 cities:\n");
    for (int i = 0; i < 10; i++) {
        printf("City %d: ", i + 1);
        scanf("%d", &population[i]);
    }

    printf("\nPopulation in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", population[i]);
    }
    printf("\n");

    max = population[0];
    min = population[0];

    for (int i = 0; i < 10; i++) {
        if (population[i] > max) {
            max = population[i];
        }
        if (population[i] < min) {
            min = population[i];
        }
        average += population[i];
    }

    average /= 10;

    printf("Maximum population: %d\n", max);
    printf("Minimum population: %d\n", min);
    printf("Average population: %.2f\n", average);

    return 0;
}

