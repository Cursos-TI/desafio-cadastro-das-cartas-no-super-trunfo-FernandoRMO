#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Variáveis:
    char nome[20];
    char estado;
    char codigo[3];
    int populacao;
    int pontosTuristicos;
    float area;
    float pib;

    //Pergunta as informaçôes da primeira carta do usuario.
    printf("Digite o nome da sua cidade: ");
    scanf("%s\n", nome);

    printf("Digite o estado da sua cidade: ");
    scanf("%c\n", &estado);

    printf("Digite código da sua cidade: ");
    scanf("%s\n", codigo);

    printf("Digite a populção da sua cidade: ");
    scanf("%d\n", &populacao);

    printf("Digite quantos pontos turísticos a sua cidade tem: ");
    scanf("%d\n", &pontosTuristicos);

    printf("Digite a Área da sua cidade: ");
    scanf("%f\n", &area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f\n", &pib);
    return 0;
}
