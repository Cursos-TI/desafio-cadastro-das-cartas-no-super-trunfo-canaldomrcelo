#include <stdio.h> 
int main() {
    //Declaração
    char estado;
    char estado2;
    char cidade1[20];
    char cidade2[20];
    char codigo1[3]; 
    char codigo2[3];
    int populacao1, populacao2;
    int pontosturistico1, pontosturistico2;                         //variaveis com as caracteristicas das cartas
    float pib1, pib2, area1, area2; 
    float densidade1, densidade2, pibpercapta1, pibpercapta2;

    printf("INSIRA OS DADOS DA 1º CARTA:\n");
    
    printf("estado de A à H: ");
    scanf("%c", &estado);
    
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
    printf("carta 1 inserida com sucesso\n");

    printf("Agora vamos inserir a 2º CARTA:\n");

    
    
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

    printf("cartas cadastradas com sucesso");
    

    


}
