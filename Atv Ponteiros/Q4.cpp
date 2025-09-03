#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Quantos dias foram trabalhados? ");
    scanf("%d", &n);

    int *horas = (int*) malloc(n * sizeof(int));
    int total = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite as horas foram trabalhadas no dia %d: ", i + 1);
        scanf("%d", (horas + i));
        total += *(horas + i);
    }

    printf("Total de horas trabalhadas: %d\n", total);

    free(horas);
    return 0;
}
