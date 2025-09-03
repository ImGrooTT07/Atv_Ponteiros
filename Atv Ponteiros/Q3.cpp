#include <stdio.h>

int main() {

    float preco[5];
    float *pPreco = preco;

    printf("=== 3) Precos de 5 Produtos ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", (pPreco + i));
    }

    printf("\nPrecos e descontos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %d: R$ %.2f | Com desconto: R$ %.2f\n",
               i + 1, *(pPreco + i), *(pPreco + i) * 0.9);
    }
    printf("\n");
	
return 0;
}
