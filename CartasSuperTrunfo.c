#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Variáveis da carta 1;
    char estado1;
    char codigo1[10]; 
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    //Variáveis para calculo;
    float densidade_populacional1;
    float Pib_Per_Capita1;
    float SuperPoder1;

    // Variáveis da carta 2;
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    //Variáveis para calculo;
    float densidade_populacional2;
    float Pib_Per_Capita2;
    float SuperPoder2;

    // -- Cadastro da carta número 1 --
    printf("--- Cadastro da carta 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1); 

    printf("Digite a area em km: ");
    scanf(" %f", &area1); 

    printf("Digite o pib: ");
    scanf(" %f", &pib1); 

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontos1); 

     //Calculo de densidade populacional e PibPerCapta carta número 1;
    densidade_populacional1 = (float)populacao1 / area1;
    Pib_Per_Capita1 = (float)pib1 / populacao1;
    float inversoDensidade1 = 1.0f / densidade_populacional1;
    SuperPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + Pib_Per_Capita1 + inversoDensidade1;

    // -- Cadastro da carta número 2 --
    printf("\n--- Cadastro da carta 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);

    printf("Digite a area em km: ");
    scanf(" %f", &area2);

    printf("Digite o pib: ");
    scanf(" %f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontos2);

    //Calculo de densidade populacional e PibPerCapta carta número 2;
    densidade_populacional2 = (float)populacao2 / area2;
    Pib_Per_Capita2 = (float)pib2 / populacao2;
    float inversoDensidade2 = 1.0f / densidade_populacional2;
    SuperPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + Pib_Per_Capita2 + inversoDensidade2;

    // --- Exibição de dados ---
    //Carta 1
    printf("\n====================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado1, codigo1, cidade1);
    printf("Populacao: %lu\nArea: %.2f km2\nPontos: %d\n", populacao1, area1, pontos1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("Pib per Capita: %.2f reais\n", Pib_Per_Capita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %lu\nArea: %.2f km2\nPontos: %d\n", populacao2, area2, pontos2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("Pib per Capita: %.2f reais\n", Pib_Per_Capita2);
    printf("Super Poder: %.2f\n", SuperPoder2);
/*
    //Comparação das cartas sendo 1 verdade, 0 falso;                                   //sem uso no momento
    printf("\nResultado de Comparação das cartas são:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("Pib: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", Pib_Per_Capita1 > Pib_Per_Capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
*/
    /*
    // --- Lógica de Comparação (Atributo: Pontos Turísticos) ---
    // Regra: Maior valor vence                                                         //sem uso no momento

    printf("\n Comparação de Cartas (Atributo: Pontos Turísticos) \n\n");

    printf("Carta 1 - %s: %d pontos turísticos\n", cidade1, pontos1);
    printf("Carta 2 - %s: %d pontos turísticos\n", cidade2, pontos2);

    if (pontos1 > pontos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
*/
       
    // --- Menu princial do SuperTrunfo (Escolha dos atributos)---
        int resultado1, resultado2;
        int primeiroAtriburo, segundoAtributo;
        float valor1_C1 = 0, valor1_C2 = 0; // Armazena Atributo 1 de cada carta
        float valor2_C1 = 0, valor2_C2 = 0; // Armazena Atributo 2 de cada carta
        float somaFc1, somaFc2;

  printf("Bem-vindo ao jogo!\n");
    printf("\nEscolha o primeiro atributo (1 a 5) :\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("Escolha uma Opção: ");
    scanf("%d", &primeiroAtriburo);

    switch (primeiroAtriburo) {
        case 1: valor1_C1 = (float)populacao1; valor1_C2 = (float)populacao2; break;
        case 2: valor1_C1 = area1; valor1_C2 = area2; break;
        case 3: valor1_C1 = pib1; valor1_C2 = pib2; break;
        case 4: valor1_C1 = (float)pontos1; valor1_C2 = (float)pontos2; break;
        case 5: valor1_C1 = densidade_populacional1; valor1_C2 = densidade_populacional2; break;
        default: printf("Opcao Invalida!\n");
            break;
    }
    printf("\nEscolha o segundo atributo (1 a 5) :\n");
    printf("Atenção!Você deve escolher diferente do primeiro.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("Escolha uma Opção: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtriburo == segundoAtributo){
        printf("Erro!Você escolheu o mesmo atributo.\n");
    }else{
       switch (segundoAtributo) {
         case 1: valor2_C1 = (float)populacao1; valor2_C2 = (float)populacao2; break;
        case 2: valor2_C1 = area1; valor2_C2 = area2; break;
        case 3: valor2_C1 = pib1; valor2_C2 = pib2; break;
        case 4: valor2_C1 = (float)pontos1; valor2_C2 = (float)pontos2; break;
        case 5: valor2_C1 = densidade_populacional1; valor2_C2 = densidade_populacional2; break;
        default: printf("Opcao Invalida!\n");
                break;}
  
                // --- CÁLCULO DA SOMA E COMPARAÇÃO (Requisito Funcional) ---
    // Regra da Densidade: Para que ela ajude na soma, usamos o inverso ou tratamos a lógica. 
    // Para simplificar seguindo o manual, somaremos os valores brutos.
    somaFc1 = valor1_C1 + valor2_C1;
    somaFc2 = valor1_C2 + valor2_C2;

            // --- EXIBIÇÃO CLARA DOS RESULTADOS ---
    printf("\n--- CONFRONTO FINAL: %s vs %s ---\n", cidade1, cidade2);
    
    // Uso do Operador Ternário para exibir o vencedor de cada atributo individualmente
    // Atributo 1
    printf("Atributo 1 (Opcao %d): %s venceu? %s\n", primeiroAtriburo, cidade1, 
           (primeiroAtriburo == 5) ? (valor1_C1 < valor1_C2 ? "Sim" : "Nao") : (valor1_C1 > valor1_C2 ? "Sim" : "Nao"));
    
    // Atributo 2
    printf("Atributo 2 (Opcao %d): %s venceu? %s\n", segundoAtributo, cidade1, 
           (segundoAtributo == 5) ? (valor2_C1 < valor2_C2 ? "Sim" : "Nao") : (valor2_C1 > valor2_C2 ? "Sim" : "Nao"));

    printf("\nSoma dos Atributos - %s: %.2f\n", cidade1, somaFc1);
    printf("Soma dos Atributos - %s: %.2f\n", cidade2, somaFc2);

    // Veredito Final baseado na Soma
    if (somaFc1 > somaFc2) {
        printf("\nRESULTADO: %s VENCEU O DESAFIO!\n", cidade1);
    } else if (somaFc2 > somaFc1) {
        printf("\nRESULTADO: %s VENCEU O DESAFIO!\n", cidade2);
    } else 
        printf("\nRESULTADO: EMPATE!\n");
}

        return 0;

}