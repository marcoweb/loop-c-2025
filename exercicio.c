#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);

        printf("Número digitado: %d\n", numero);

        if(numero % 2 == 0) {
            printf("Número Par\n");
        } else {
            printf("Numero Ímpar\n");
        }
    } while (numero > 0);
    
    return 0;
}