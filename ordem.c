#include <stdio.h>

int main() {
    int a, b, c, d, aux;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("Digite o valor de d: ");
    scanf("%d", &d);

    if(a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if(a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    if(a > d) {
        aux = a;
        a = d;
        d = aux;
    }
    if(b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if(b > d) {
        aux = b;
        b = d;
        d = aux;
    }
    if(c > d) {
        aux = c;
        c = d;
        d = aux;
    }

    printf("Valores ordenados: %d, %d, %d, %d\n", a, b, c, d);
    return 0;
}