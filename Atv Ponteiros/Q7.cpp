#include <stdio.h>

int main() {
    int pontos[4][4] = {
        {5, 7, 8, 6},
        {4, 6, 5, 7},
        {3, 9, 6, 8},
        {2, 4, 7, 5}
    };

    int i, j;

    printf("=== PONTOS POR JOGADOR E SET ===\n");
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%d ", pontos[i][j]);
        }
        printf("\n");
    }

    // Contar pares e ímpares
    int pares = 0, impares = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (pontos[i][j] % 2 == 0) pares++;
            else impares++;
        }
    }
    printf("\nQuantidade de pontos pares: %d\n", pares);
    printf("Quantidade de pontos impares: %d\n", impares);

    // Total de pontos por jogador
    int jogadorMaiorPontuacao = 0;
    int maiorPontuacao = -1;

    printf("\nTotal de pontos por jogador:\n");
    for (i = 0; i < 4; i++) {
        int soma = 0;
        for (j = 0; j < 4; j++)
            soma += pontos[i][j];

        printf("Jogador %d: %d pontos\n", i + 1, soma);

        if (soma > maiorPontuacao) {
            maiorPontuacao = soma;
            jogadorMaiorPontuacao = i + 1;
        }
    }

    printf("Jogador com maior pontuacao: Jogador %d (%d pontos)\n", jogadorMaiorPontuacao, maiorPontuacao);

    // Total de pontos por set
    int setMaisDisputado = 0, maiorSoma = 0;

    printf("\nTotal de pontos por set:\n");
    for (j = 0; j < 4; j++) {
        int soma = 0;
        for (i = 0; i < 4; i++)
            soma += pontos[i][j];

        printf("Set %d: %d pontos\n", j + 1, soma);

        if (soma > maiorSoma) {
            maiorSoma = soma;
            setMaisDisputado = j + 1;
        }
    }

    printf("Set mais disputado: Set %d (%d pontos no total)\n", setMaisDisputado, maiorSoma);

    // Média de pontos por jogador
    printf("\nMedia de pontos por jogador:\n");
    for (i = 0; i < 4; i++) {
        int soma = 0;
        for (j = 0; j < 4; j++)
            soma += pontos[i][j];
        float media = soma / 4.0;
        printf("Jogador %d: %.2f pontos\n", i + 1, media);
    }


    // Jogador mais regular
    int jogadorMaisRegular = 0;
    int menorDiferenca = 999;

    for (i = 0; i < 4; i++) {
        int maior = pontos[i][0], menor = pontos[i][0];
        for (j = 1; j < 4; j++) {
            if (pontos[i][j] > maior) maior = pontos[i][j];
            if (pontos[i][j] < menor) menor = pontos[i][j];
        }
        int diferenca = maior - menor;
        if (diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            jogadorMaisRegular = i + 1;
        }
    }

    printf("\nJogador mais regular: Jogador %d (diferenca entre maior e menor pontuacao = %d)\n",
           jogadorMaisRegular, menorDiferenca);

    return 0;
}
