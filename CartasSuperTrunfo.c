#include <stdio.h> 
int main() {
    //Declaração
    char estado1, estado2, cidade1[20], cidade2[20], codigo1[5], codigo2[5];
    int populacao1, populacao2, pontosturistico1, pontosturistico2;                         //variaveis com as caracteristicas das cartas
    float pib1, pib2, area1, area2, densidade1, densidade2, pibpercapta1, pibpercapta2, superpoder1, superpoder2;

    printf("Bem-vindo ao Super Trunfo Cidades!\n");
    printf("Desafie seus amigos e se divirta!!!.\n\n");
    printf("INSIRA OS DADOS DA 1º CARTA:\n");
    
    printf("estado de A à H: ");
    scanf("%c", &estado1);
    
    printf("codigo da carta: ");
    scanf("%s", codigo1);
    
    printf("digite a cidade: ");
    scanf("%s", cidade1);

    printf("digite a população: ");
    scanf("%d", &populacao1);

    printf("digite a área km²: ");
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

    printf("digite a área km² ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("pontos turisticos: ");
    scanf("%d", &pontosturistico2);

    


    printf("----------------------------------------------\n");
    printf("CARTA 2 INSERIDA COM SUCESSO!!\n");
    printf("----------------------------------------------\n");
    printf("CARTA 01:\n");
    
    printf("Estado: %c \n", estado1);

    printf("Codigo: %s \n", codigo1);

    printf("Nome da Cidade: %s \n", cidade1);

    printf("Populacao: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de reais\n",pib1);

    printf("Número de Pontos Turísticos: %d \n",pontosturistico1);

    printf("Densidade Populacional: %.2f hab/km²\n", populacao1/area1);
    printf("PIB per Capita: %.2f reais\n", pib1/populacao1);
    printf("SUPER PODER CARTA 1: %.2f\n", superpoder1 = populacao1+area1+pib1+pibpercapta1+densidade1);
    
    printf("----------------------------------------------\n");

    printf("CARTA 02:\n");
    
    printf("Estado: %c \n", estado2);

    printf("Codigo: %s \n", codigo2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("Populacao: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n",pib2);

    printf("Número de Pontos Turísticos: %d \n",pontosturistico2);

    printf("Densidade Populacional: %.2f hab/km²\n", populacao2/area2);
    printf("PIB per Capita: %.2f reais\n", pib2/populacao2);
    printf("SUPER PODER CARTA 2: %.2f\n", superpoder2 = populacao2+area2+pib2+pibpercapta2+densidade2);
    
    printf("----------------------------------------------\n");
    printf("COMPARAÇÃO DAS CARTAS \n");
    printf("----------------------------------------------\n");
    
    if (populacao1 > populacao2)
    {
        printf("1-População: Carta 1 venceu!\n");
    } else {
        printf("0-População: Carta 2 venceu!\n");
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
    if (densidade1 > densidade2)
{
    printf("Densidade populacional: Carta 1 venceu!\n");
} else {
    printf("Densidade populacional: Carta 2 venceu!\n");
}
if (pib2 > populacao2)
{
    printf("PIB Percapta: Carta 1 venceu!\n");
} else {
    printf("PIB Percapta: Carta 2 venceu!\n");
}
if (superpoder1 > superpoder2)
{
    printf("SUPER PODER: Carta 1 venceu!\n");
} else {
    printf("SUPER PODER: Carta 2 venceu!\n");
}

printf("----------------------------------------------");
}
