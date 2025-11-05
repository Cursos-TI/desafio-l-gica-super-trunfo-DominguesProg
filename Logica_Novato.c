#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado;
    char codigo[10], nome[50];
    int populacao, ponto;
    float area, pib, densidade, percapta;

    // Variáveis da carta 2
    char estado2;
    char codigo2[10], nome2[50];
    int populacao2, ponto2;
    float area2, pib2, densidade2, percapta2;

    //Apresentação
    printf("Olá, seja bem-vindo ao jogo Super Trunfo!\n\n");

    // Cadastramento carta1
    printf(" Carta 1 \n");
    printf("Digite uma letra de A à H para representar o estado: ");
    scanf(" %c", &estado);

    printf("Digite um número de 1 a 4 para representar o código da carta: ");
    scanf("%s", codigo);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite o número populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("Determine o tamanho da área em km²: ");
    scanf("%f", &area);

    printf("Agora determine o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem essa cidade?: ");
    scanf("%d", &ponto);

    densidade = populacao / area;
    percapta = (pib * 1000000000) / populacao;

    // Cadastramento carta2
    printf("\n Carta 2 \n");
    printf("Digite uma letra de A à H para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 1 a 4 para representar o código da carta: "); 
    scanf("%s", codigo2);

    printf("Escolha o nome da cidade: "); 
    scanf(" %[^\n]", nome2);

    printf("Digite o número populacional dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Determine o tamanho da área em km²: ");
    scanf("%f", &area2);

    printf("Agora determine o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem essa cidade?: ");
    scanf("%d", &ponto2);

    densidade2 = populacao2 / area2;
    percapta2 = (pib2 * 1000000000) / populacao2;

    // Comparação de atributo escolhido (PIB)
    printf("\n***  COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)  ***\n");
    printf("Carta1: %s (%c): %.2f bilhões\n", nome, estado, pib);
    printf("Carta2: %s (%c): %.2f bilhões\n", nome2, estado2, pib2);
    if (pib > pib2){
        printf("Resultado: Carta 1 (%s) VENCEU!!!\n", nome);
    } else {
        printf("Resultado: Carta 2 (%s) VENCEU!!!\n", nome2);
    }
    if (pib == pib2){
        printf("Resultado: EMPATE!!!");
    }

    return 0;
}