#include <stdio.h>

int main() {
	
    int cofrinho = 1500;
    int *pCofrinho = &cofrinho; 

    printf("Cofrinho \n");
    printf("Valor guardado: %d\n", *pCofrinho);
    printf("Endereco de memoria: %p\n\n", *pCofrinho);
    
return 0;
}
