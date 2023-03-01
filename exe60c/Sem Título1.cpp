#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeMaisVelha[50], nomeMulherMaisJovem[50];
    char sexo, continua = 's';
    int idade, idadeMaisVelha = 0, idadeMulherMaisJovem = 999, somaIdade = 0;
    int homensMaisDe30 = 0, mulheresMenosDe18 = 0;
    int totalPessoas = 0, totalHomens = 0, totalMulheres = 0;

    while (continua == 's' || continua == 'S') {
        printf("Digite o nome da %dª pessoa: ", totalPessoas + 1);
        scanf("%s", nome);

        printf("Digite a idade da %s: ", nome);
        scanf("%d", &idade);

        printf("Digite o sexo da %s [M/F]: ", nome);
        scanf(" %c", &sexo);

        // atualiza a idade da pessoa mais velha
        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            strcpy(nomeMaisVelha, nome);
        }

        // atualiza a idade da mulher mais jovem
        if (sexo == 'F' || sexo == 'f') {
            if (idade < idadeMulherMaisJovem) {
                idadeMulherMaisJovem = idade;
                strcpy(nomeMulherMaisJovem, nome);
            }

            if (idade < 18) {
                mulheresMenosDe18++;
            }

            totalMulheres++;
        } else {
            if (idade > 30) {
                homensMaisDe30++;
            }

            totalHomens++;
        }

        somaIdade += idade;
        totalPessoas++;

        printf("Deseja cadastrar mais uma pessoa? [S/N]: ");
        scanf(" %c", &continua);
    }

    float mediaIdade = (float) somaIdade / totalPessoas;

    printf("\n--- RESULTADO ---\n");
    printf("Nome da pessoa mais velha: %s (idade %d)\n", nomeMaisVelha, idadeMaisVelha);
    printf("Nome da mulher mais jovem: %s (idade %d)\n", nomeMulherMaisJovem, idadeMulherMaisJovem);
    printf("Média de idade do grupo: %.2f\n", mediaIdade);
    printf("Quantidade de homens com mais de 30 anos: %d\n", homensMaisDe30);
    printf("Quantidade de mulheres com menos de 18 anos: %d\n", mulheresMenosDe18);

    return 0;
}

