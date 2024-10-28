#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M, N;

    printf("Enter the number of samples (M): ");
    scanf("%d", &M);

    printf("Enter the number of samples for moving average (N): ");
    scanf("%d", &N);

    int *noisy_signal = (int *)malloc(M * sizeof(int));
    float *averaged_signal = (float *)malloc(M * sizeof(float));

    srand(time(NULL));
    printf("\nOriginal Noisy Signal:\n");
    for (int i = 0; i < M; i++) {
        noisy_signal[i] = rand() % 100; // Random values between 0 and 99
        printf("%d ", noisy_signal[i]);
    }
    printf("\n");

    for (int i = 0; i < M; i++) {
        float sum = 0.0;
        int count = 0;

        for (int j = i; j >= 0 && count < N; j--) {
            sum += noisy_signal[j];
            count++;
        }

        averaged_signal[i] = sum / count;
    }

    printf("\nAveraged Signal:\n");
    for (int i = 0; i < M; i++) {
        printf("%.2f ", averaged_signal[i]);
    }
    printf("\n");

    free(noisy_signal);
    free(averaged_signal);

    return 0;
}

