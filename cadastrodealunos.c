#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome [50];

    printf ("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f",&altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\nSua matrícula é: %d\n", nome, matricula);
    printf("Idade: %d anos\nAltura: %.2f m",idade, altura);

    return 0;








}