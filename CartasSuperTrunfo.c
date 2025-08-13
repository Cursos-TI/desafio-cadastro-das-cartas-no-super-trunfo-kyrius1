#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Daniel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variáveis da primeira carta
    char estado1[2];
    char codcarta1[50];
    char cidade1[50];
    int populacao1;
    float km1;
    float pib1;
    int pt1;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado (letra de A a H): ");
    scanf(" %1s", estado1); // aqui vai ler somente uma letra

    printf("Digite o codigo da carta: ");
    scanf("%s", codcarta1);  // lê até 9 caracteres, evita overflow

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // aqui lê com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &km1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pt1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n----DADOS DA CARTA 1----\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", km1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pt1);
    
    printf("\n"); // espaço entre os textos

    // Variáveis da segunda carta
    char estado2[2];
    char codcarta2[50];
    char cidade2[50];
    int populacao2;
    float km2;
    float pib2;
    int pt2;

    printf("Digite o estado (letra de A a H): ");
    scanf(" %1s", estado2); 

    printf("Digite o codigo da carta: ");
    scanf("%s", codcarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);  

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: (Km²) ");
    scanf("%f", &km2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pt2);

    // Exibe os dados da carta 2
    printf("\n----DADOS DA CARTA 2----\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", km2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pt2);


    return 0;
}
