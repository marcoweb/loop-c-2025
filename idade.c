#include <stdio.h>

int main() {
    int idade = 0;
    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Idade: %d\n", idade);

        if(idade <= 12) {
            printf("Criança\n");
        } else if (idade <= 17) {
            printf("Adolescente\n");
        } else if (idade <= 59) {
            printf("Adulto\n");
        } else {
            printf("Idoso\n");
        }

    } while(idade >= 0);

    return 0;
}