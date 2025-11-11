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
    
    //Atributo escolhido
    int opcao;

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


    printf("Escolha um atributo para ser comparado\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcao);

    // Comparação de atributo escolhido pelo usuario:

    switch (opcao){
    case 1: 
    printf("Você escolheu a opção população\n");
        if (populacao == populacao2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: População!\n");
            printf("Carta1: %d/ Carta2: %d\n", populacao, populacao2);
            printf("Deu empate!\n");

        } else if (populacao > populacao2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: População!\n");
            printf("Carta1: %d/ Carta2: %d\n", populacao, populacao2);
            printf("Carta 1 **VENCE**: %d\n", populacao);

        }  else if (populacao < populacao2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: População!\n");
            printf("Carta1: %d/ Carta2: %d\n", populacao, populacao2);
            printf("Carta 2 **VENCE**: %d\n", populacao2);
        } 
        break;

    case 2: 
    printf("Você escolheu a opção Área\n");
        if (area == area2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Área!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", area, area2);
            printf("Deu empate!\n");

        } else if (area > area2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Área!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", area, area2);
            printf("Carta 1 **VENCE**: %.2f\n", area);

        } else if (area < area2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Área!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", area, area2);
            printf("Carta 2 **VENCE**: %.2f\n", area2);
        } 
        break;

    case 3: 
    printf("Você escolheu a opção PIB\n");
        if (pib == pib2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: PIB!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", pib, pib2);
            printf("Deu empate!\n");

        } else if (pib > pib2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: PIB!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", pib, pib2);
            printf("Carta 1 **VENCE**: %.2f\n", pib);

        } else if (pib < pib2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: PIB!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", pib, pib2);
            printf("Carta 2 **VENCE**: %.2f\n", pib2);
        } 
        break;

    case 4: 
    printf("Você escolheu a opção Pontos Turisticos\n");
        if (ponto == ponto2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Pontos Turisticos!\n");
            printf("Carta1: %d/ Carta2: %d\n", ponto, ponto2);
            printf("Deu empate!\n");

        } else if (ponto > ponto2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Pontos Turisticos!\n");
            printf("Carta1: %d/ Carta2: %d\n", ponto, ponto2);
            printf("Carta 1 **VENCE**: %d\n", ponto);

        } else if (ponto < ponto2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Pontos Turisticos!\n");
            printf("Carta1: %d/ Carta2: %d\n", ponto, ponto2);
            printf("Carta 2 **VENCE**: %d\n", ponto2);
        } 
        break;

    case 5: 
    printf("Você escolheu a opção Densidade Demografica\n");
        if (densidade == densidade2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Densidade Demografica!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", densidade, densidade2);
            printf("Deu empate!\n");

        } else if (densidade < densidade2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Densidade Demografica!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", densidade, densidade2);
            printf("Carta 1 **VENCE**: %.2f\n", densidade);

        } else if (densidade > densidade2){
            printf("%s e %s\n", nome, nome2);
            printf("Atributo: Densidade Demografica!\n");
            printf("Carta1: %.2f/ Carta2: %.2f\n", densidade, densidade2);
            printf("Carta 2 **VENCE**: %.2f\n", densidade2);
        } 
        break;
        
        default:
        printf("Opção invalida");
        break;
    }

    



}