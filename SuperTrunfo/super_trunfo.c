#include <stdio.h>

int main () {

    //Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidadePop1, PerCapita1;

    //Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidadePop2, PerCapita2;


    //Entrada de dados para a primeira carta
    printf("Digite o estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49s", &cidade1); //Evita o estouro de buffer
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &turismo1);

    // Cálculos para a primeira carta
    densidadePop1 = populacao1 / area1;
    PerCapita1 = pib1 * 1000000000 / populacao1; // 1000000000 está convertendo o PIB, que foi informado pelo usuário em bilhões de reais, para reais.

     // Entrada de dados para a segunda carta
     printf("\nDigite o estado (A-H) da segunda carta: ");
     scanf(" %c", &estado2);
     printf("Digite o código da segunda carta (ex: B02): ");
     scanf(" %s", codigo2);
     printf("Digite o nome da cidade: ");
     scanf(" %49s", cidade2);
     printf("Digite a população da cidade: ");
     scanf(" %d", &populacao2);
     printf("Digite a área da cidade (km²): ");
     scanf(" %f", &area2);
     printf("Digite o PIB da cidade (em bilhões de reais): ");
     scanf(" %f", &pib2);
     printf("Digite o número de pontos turísticos: ");
     scanf(" %d", &turismo2);

     // Cálculos para a primeira carta
    densidadePop2 = populacao2 / area2;
    PerCapita2 = pib2 * 1000000000 / populacao2;

     // Exibição dos dados da primeira carta
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", turismo1);
     printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePop1);
     printf("PIB per Capita: %.2f reais\n", PerCapita1);

      // Exibição dos dados da segunda carta
      printf("\nCarta 2:\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", cidade2);
      printf("População: %d\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões de reais\n", pib2);
      printf("Número de Pontos Turísticos: %d\n", turismo2);
      printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePop2);
      printf("PIB per Capita: %.2f reais\n", PerCapita2);


 return 0;

}