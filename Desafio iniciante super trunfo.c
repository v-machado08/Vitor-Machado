#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Vitor Machado dos Santos

int main() {
    char nome1 [50];// Nome da cidade
    int população1, np1, codigo1; //Variáveis inteiras (População, pontos turísticos e código da cidade.)
    float area1, pib1; //Variáveis ponto flutuante


    printf ("Digite o código da cidade: ");
        scanf("%d", &codigo1);

    printf ("Digite o nome da cidade: ");
        scanf("%s", nome1);

    printf("Digite o número da população da cidade: ");
        scanf("%d", &população1);

    printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &np1);

    printf ("Digite a área da cidade: ");
        scanf ("%f", &area1);

    printf ("Digite o PIB: ");
        scanf("%f", &pib1);



    printf("Nome da cidade: %s\n", nome1);
    printf("Quantidade de habitantes: %d\nNúmero de pontos turísticos: %d\nCódigo: %d\n", população1, np1, codigo1);
    printf("Área: %.2f\nPIB: %.2f\n", area1, pib1);

    return 0;


}
