#include <stdio.h>
#include <unistd.h>

int main() {
    int N;
    printf("Enter the number of minutes (N): ");
    scanf("%d", &N);
    
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j < 60; j++) {
            printf("%02d : %02d\n", i, j);
            fflush(stdout);
            sleep(1);
        }
    }

    return 0;
}

