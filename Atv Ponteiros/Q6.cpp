#include <stdio.h>

int main() {
    float matriz[3][3];
    float *pMatriz = &matriz[0][0];
    float somaDiagonal = 0;

    for (int i = 0; i < 9; i++) {
        printf("Digite a nota [%d][%d]: ", i / 3, i % 3);
        scanf("%f", (pMatriz + i));
    }

    printf("\nTodas as notas:\n");
    for (int i = 0; i < 9; i++) {
        printf("%.2f ", *(pMatriz + i));
        if ((i + 1) % 3 == 0) printf("\n");

        if (i == 0 || i == 4 || i == 8) {
            somaDiagonal += *(pMatriz + i);
        }
    }

    printf("\nSoma da diagonal principal: %.2f\n", somaDiagonal);

    return 0;
}

