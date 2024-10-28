#include <stdio.h>

void generate_pattern_for(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void generate_pattern_while(int n) {
    int i = 1;
    while (i <= n) {
        int j = n;
        while (j > i) {
            printf(" ");
            j--;
        }
        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    i = 1;
    while (i <= n) {
        int j = n;
        while (j > i) {
            printf(" ");
            j--;
        }
        j = 1;
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    int N;
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);

    generate_pattern_for(N);
    generate_pattern_while(N);

    return 0;
}

