#include <stdio.h>

float media(float a, float b);
char *Situacao(float num);

int main() {
    float n1, n2, notas;
    char *status;
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    notas = media(n1,n2);
    status = Situacao(notas);
    printf("Media: %.2f\n",notas);
    printf("Situacao: %s\n", status);
    return 0;
}

float media(float a, float b){
    float soma = (a + b) / 2;
    return soma;
}

char *Situacao(float num){
    char *situacao;
    if(num >= 6){
        situacao = "APROVADO";
    }
    else if(num >= 3 && num < 6){
        situacao = "RECUPERACAO";
    }
    else if(num < 3){
        situacao = "REPROVADO";
    }
    return situacao;
}

