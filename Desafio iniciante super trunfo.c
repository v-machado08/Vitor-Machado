#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Vitor Machado dos Santos

int main() {
    char nome1 [50];// Nome da cidade 1
    char nome2 [50];
    char estado1 [50];
    char estado2[50];
    int população1, np1, codigo1; //Variáveis inteiras (População, pontos turísticos e código da cidade.)
    int população2, np2, codigo2;
    float area1, pib1; //Variáveis ponto flutuante da cidade 1 
    float area2, pib2;


    printf ("Digite o código da cidade 1: "); 
        scanf("%d", &codigo1); //Solicita a entrada do número do código da primeira cidade

    
    printf ("Digite o nome da cidade 1: ");
        scanf("%s", nome1); //Solicita a entrada do nome da primeira cidade


    printf ("Digite o estado da cidade 1: ");
         scanf("%s", estado1); //Solicita o nome do estado na cidade 1


    printf("Digite o número da população da cidade 1: ");
        scanf("%d", &população1); //Solicita a entrada do número da populção da primeira cidade 

    
    printf("Digite o número de pontos turísticos da cidade 1: ");
        scanf("%d", &np1); // Solicita o número de pontos turísticos da cidade 1

    
    printf ("Digite a área da cidade 1: ");
        scanf ("%f", &area1); //Solicita o valor da área da primeira cidade

    printf ("Digite o PIB 1: ");
        scanf("%f", &pib1); //Solicita o valor do PIB da primeira cidade


    printf ("Digite o código da cidade 2: ");
        scanf("%d", &codigo2); //Solicita a entrada do número do código da Segunda cidade



    printf ("Digite o nome da cidade 2: "); //Solicita a entrada do nome da segunda cidade
        scanf("%s", nome2);


    printf ("Digite o estado da cidade 2: ");
         scanf("%s", estado2); //Solicita a entrada do nome do estado na cidade dois


    printf("Digite o número da população da cidade 2: "); //Solicita a entrada do número da populção da segunda cidade 
        scanf("%d", &população2);


    printf("Digite o número de pontos turísticos da cidade 2: "); //Solicita o número de pontos turísticos da cidade 2
         scanf("%d", &np2);


    printf ("Digite a área da cidade 2: "); //Solicita o valor da área da segunda cidade
        scanf ("%f", &area2);


    printf ("Digite o PIB 2: "); //Solicita o valor do PIB da Segunda cidade
        scanf("%f", &pib2);

//os comandos abaixo imprimem as informaçoes da cidade 1
    printf("Cidade1\n");
    printf("Nome da cidade: %s\n", nome1);
    printf("Quantidade de habitantes: %d\nNúmero de pontos turísticos: %d\nCódigo: %d\n", população1, np1, codigo1);
    printf("Área: %.2f\nPIB: %.2f\n", area1, pib1);

//os comandos abaixo imprimem as informaçoes da cidade 2 na tela
    printf("Cidade2\n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Quantidade de habitantes: %d\nNúmero de pontos turísticos: %d\nCódigo: %d\n", população2, np2, codigo2);
    printf("Área: %.2f\nPIB: %.2f\n", area2, pib2);

    return 0;


}
