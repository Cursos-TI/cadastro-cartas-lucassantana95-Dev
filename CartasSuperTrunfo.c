#include <stdio.h>

int main(){
    // Variáveis da carta 1;
    char estado1;
    char codigo1[10]; 
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;
    //Variáveis para calculo;
    float densidade_populacional1;
    float Pib_Per_Capita1;

    // Variáveis da carta 2;
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;
    //Variáveis para calculo;
    float densidade_populacional2;
    float Pib_Per_Capita2;

    // -- Cadastro da carta número 1 --
    printf("--- Cadastro da carta 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1); 

    printf("Digite a area em km: ");
    scanf(" %f", &area1); 

    printf("Digite o pib: ");
    scanf(" %f", &pib1); 

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontos1); 

     //Calculo de densidade populacional e PibPerCapta carta número 2;
    densidade_populacional1 = (float)populacao1 / area1;
    Pib_Per_Capita1 = (float)pib1 / populacao1;

    // -- Cadastro da carta número 2 --
    printf("\n--- Cadastro da carta 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area em km: ");
    scanf(" %f", &area2);

    printf("Digite o pib: ");
    scanf(" %f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontos2);

    //Calculo de densidade populacional e PibPerCapta carta número 2;
    densidade_populacional2 = (float)populacao2 / area2;
    Pib_Per_Capita2 = (float)pib2 / populacao2;


    // --- Exibição de dados ---
    //Carta 1
    printf("\n====================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado1, codigo1, cidade1);
    printf("Populacao: %d\nArea: %.2f km2\nPontos: %d\n", populacao1, area1, pontos1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("Pib per Capita: %.2f reais\n", Pib_Per_Capita1);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %d\nArea: %.2f km2\nPIB: %.2f\nPontos: %d\n", populacao2, area2, pib2, pontos2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("Pib per Capita: %.2f reais\n", Pib_Per_Capita2);

    return 0;
}