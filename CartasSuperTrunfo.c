#include <stdio.h>

int main(){
    printf("Desafio Cartas Super Trunfo\n");
    char cidade1[20], estado1[4], codigo1[4], cidade2[25], estado2[4], codigo2[4];
    int populacao1,nptturisticos1, populacao2, nptturisticos2;
    float area1,pib1, area2, pib2;
    printf("Primeira Carta\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Estado: ");
    scanf(" %s", &estado1);

    printf("Código: ");
    scanf("  %s", &codigo1);

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf("%f%*c", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d%*c", &nptturisticos1);
  
    printf("Segunda carta\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Estado: ");
    scanf(" %s", &estado2);

    printf("Código: ");
    scanf("  %s", &codigo2);

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &nptturisticos2);


    printf("Carta 01: \n");
     
    printf("Estado: %s \n", estado1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Código: %s \n", codigo1);
    printf("População: %d \n", populacao1);
    printf("Área: %.3f km² \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de pontos turísticos: %d \n", nptturisticos1);

    printf("Carta 02: \n");

    printf("Estado: %s \n", estado2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Código: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área: %.3f km² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n", nptturisticos2);

    return 0;

}
