#include <stdio.h> 
int main() {
    //Declaração
    char estado1;
    char estado2;
    char cidade1[20];
    char cidade2[20];
    char codigo1[5]; 
    char codigo2[5];
    int populacao1, populacao2;
    int pontosturistico1, pontosturistico2;                         //variaveis com as caracteristicas das cartas
    float pib1, pib2, area1, area2; 
    float densidade1, densidade2, pibpercapta1, pibpercapta2;

    printf("INSIRA OS DADOS DA 1º CARTA:\n");
    
    printf("estado de A à H: ");
    scanf("%c", &estado1);
    
    printf("codigo da carta: ");
    scanf("%s", codigo1);
    
    printf("digite a cidade: ");
    scanf("%s", cidade1);

    printf("digite a população: ");
    scanf("%d", &populacao1);

    printf("digite a área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("pontos turisticos: ");
    scanf("%d", &pontosturistico1);
    printf("----------------------------------------------\n");
    printf("CARTA 1 INSERIDA COM SUCESSO!!\n");
    printf("----------------------------------------------\n");

    printf("INSIRA OS DADOS DA 2º CARTA:\n");
    
    printf("estado de A à H: ");
    scanf(" %c", &estado2);

    printf("codigo da carta: ");
    scanf("%s", codigo2);

    printf("digite a cidade: ");
    scanf("%s", cidade2);

    printf("digite a população: ");
    scanf("%d", &populacao2);

    printf("digite a área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("pontos turisticos: ");
    scanf("%d", &pontosturistico2);

    printf("----------------------------------------------\n");
    printf("CARTA 2 INSERIDA COM SUCESSO!!\n");
    printf("----------------------------------------------\n");
    printf("CARTA 01\n\n");
    
    printf("Estado: %c \n", estado1);

    printf("Codigo da Carta: %s \n", codigo1);

    printf("Nome da cidade: %s \n", cidade1);

    printf("Populacao: %d \n", populacao1);

    printf("Area da cidade: %2f \n", area1);

    printf("PIB: %2f \n",pib1);

    printf("Pontos Turisticos: %d \n",pontosturistico1);
    
    printf("----------------------------------------------\n");

    printf("CARTA 02\n\n");
    
    printf("Estado: %c \n", estado2);

    printf("Codigo da Carta: %s \n", codigo2);

    printf("Nome da cidade: %s \n", cidade2);

    printf("Populacao: %d \n", populacao2);

    printf("Area da cidade: %2f \n", area2);

    printf("PIB: %2f \n",pib2);

    printf("Pontos Turisticos: %d \n",pontosturistico2);
    
    printf("----------------------------------------------\n");
    printf("COMPARAÇÃO DAS CARTAS \n");
    printf("----------------------------------------------\n");
    
    if (populacao1 > populacao2)
    {
        printf("População: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }
    if (area1 > area2)
    {
        printf("Àrea: Carta 1 venceu!\n");
    } else {
        printf("Àrea: Carta 2 venceu!\n");
    }
    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }
    if (pontosturistico1 > pontosturistico2)
    {
        printf("Pontos turísticos: Carta 1 venceu!\n");
    } else {
        printf("Pontos turísticos: Carta 2 venceu!\n");
}
printf("----------------------------------------------");
}
