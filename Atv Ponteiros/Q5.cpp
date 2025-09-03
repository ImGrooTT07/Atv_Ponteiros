#include <stdio.h>

int main() {
    float notas[6];
    float *pNotas = notas;

    for (int i = 0; i < 6; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", (pNotas + i));
    }

    for (int i = 0; i < 3; i++) {
        float temp = *(pNotas + i);
        *(pNotas + i) = *(pNotas + (5 - i));
        *(pNotas + (5 - i)) = temp;
    }

    printf("\nNotas na ordem invertida:\n");
    for (int i = 0; i < 6; i++) {
        printf("Aluno %d: %.2f\n", i + 1, *(pNotas + i));
    }

    return 0;
}

