#include <stdio.h>

int main() {

	int idade;
	int *pIdade = &idade;
	
	printf("Digite a idade do aluno: \n");
	scanf("%d", &idade);
	
	printf("Idade armazenada: %d \n", *pIdade);
	printf("Endereco de memoria: %p \n \n", *pIdade);
	
	
return 0;
}
