#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Variáveis:
    char nome[50], codigo[20];
    char estado;
    int populacao, pontos;
    float area, pib;

    //Pergunta as informaçôes da primeira carta.
    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome);

    printf("Digite o estado da sua cidade: ");
    scanf("%c ", &estado);

    printf("Digite código da sua cidade: ");
    scanf("%s ", codigo);

    printf("Digite a populção da sua cidade: ");
    scanf("%d ", &populacao);

    printf("Digite quantos pontos turísticos a sua cidade tem: ");
    scanf("%d ", &pontos);

    printf("Digite a Área da sua cidade: ");
    scanf("%f ", &area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f ", &pib);
    


    //Pergunta as informações da segunda carta.
    printf("Digite o nome da sua cidade: ");
    scanf("%s ", nome);

    printf("Digite o estado da sua cidade: ");
    scanf("%c ", &estado);

    printf("Digite código da sua cidade: ");
    scanf("%s ", codigo);

    printf("Digite a populção da sua cidade: ");
    scanf("%d ", &populacao);

     printf("Digite quantos pontos turísticos a sua cidade tem: ");
    scanf("%d ", &pontos);

    printf("Digite a Área da sua cidade: ");
    scanf("%f ", &area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f ", &pib);

    return 0;

}
