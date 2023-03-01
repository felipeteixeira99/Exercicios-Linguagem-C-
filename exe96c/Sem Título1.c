#include <stdio.h>

float media(float a, float b);

int main() {
    float n1, n2, notas;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    notas = media(n1, n2);
    printf("Media: %.2f", notas);
    return 0;
}

float media(float a, float b) {
    float soma = (a + b) / 2;
    return soma;
}

