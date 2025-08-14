#include <stdio.h>

//Teste Daniel

int main() {
    // Variáveis da primeira carta
    char estado1[50];
    char codcarta1[50];
    char cidade1[50];
    int populacao1;
    float km1;
    float pib1;
    int pt1;
    // inclusao de variaveis para o nivel aventureiro
    float dp1; //abrev de densidade populacional
    float pibperc1; // abrev de pib per capita


    printf("Digite o estado (letra de A a H): ");
    scanf(" %s", estado1); // aqui vai ler somente uma letra

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

    dp1 = populacao1 / km1;

    pibperc1 = pib1 / populacao1;

    // Exibe os dados da carta 1
    printf("\n----DADOS DA CARTA 1----\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.f Km²\n", km1);
    printf("PIB: %.f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pt1);
    printf("Densidade Populacional: %.f hab/Km²\n", dp1);
    printf("PIB per Capita: %.f \n", pibperc1);

    printf("\n"); // espaço entre os textos

    // Variáveis da segunda carta
    char estado2[50];
    char codcarta2[50];
    char cidade2[50];
    int populacao2;
    float km2;
    float pib2;
    int pt2;
    float dp2; //abrev de densidade populacional
    float pibperc2;


    printf("Digite o estado (letra de A a H): ");
    scanf(" %s", estado2); 

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

    dp2 = populacao2 / km2;

    pibperc2 = pib2 / populacao2;

    // Exibe os dados da carta 2
    printf("\n----DADOS DA CARTA 2----\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f Km²\n", km2);
    printf("PIB: %.f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.f hab/Km²\n", dp2);
    printf("PIB per Capita: %.f \n", pibperc2);

    return 0;
}