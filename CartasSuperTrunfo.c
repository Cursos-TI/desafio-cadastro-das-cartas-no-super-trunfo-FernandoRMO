#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Variáveis:
    char nome[20], nome2[20], codigo[20], codigo2[20];
    char estado, estado2;
    int populacao, populacao2, pontos, pontos2;
    float area, area2, pib, pib2;

    //Pergunta as informaçôes da primeira carta.

printf("Carta 1: \n");

    printf("Digite o estado da sua cidade: ");
    scanf("%c", &estado);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome);

    printf("Digite código da sua cidade: ");
    scanf("%s", codigo);

    printf("Digite a populção da sua cidade: ");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turísticos a sua cidade tem: ");
    scanf("%d", &pontos);

    printf("Digite a Área da sua cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);
    
printf("Carta 2: \n");

    //Pergunta as informações da segunda carta.
   printf("Digite o estado da sua cidade: ");
    scanf("%c ", &estado2);
    
    printf("Digite o nome da sua cidade: ");
    scanf("%s ", nome2);

    printf("Digite código da sua cidade: ");
    scanf("%s ", codigo2);

    printf("Digite a populção da sua cidade: ");
    scanf("%d ", &populacao2);

     printf("Digite quantos pontos turísticos a sua cidade tem: ");
    scanf("%d ", &pontos2);

    printf("Digite a Área da sua cidade: ");
    scanf("%f ", &area2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f ", &pib2);

    //Aqui mostrará o resultado da primeira carta.
printf("\n");

    printf("Resultados \n");

    printf("\n");

    printf("Carta 1: \n");

    printf("Nome da cidade: %s\n", nome);

    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("População: %d\n", populacao);

    printf("Número de Pontos Turísticos: %d\n", pontos);

    printf("Área em km²: %f\n", area);

    printf("PIB: %f\n", pib);

    //Aqui mostrará os resultados da segunda carta.

    return 0;

}
