#include <stdio.h>

int main() {

    int opcao1, opcao2;
    int resultado1, resultado2;
    float pop1 = 2578483, area1 = 312.3, pib1 = 73000000000, npt1 = 23, denp1 = 8172.73, pibpercap1 = 27164.45;
    float pop2 = 1588376, area2 = 218.8, pib2 = 51859618, npt2 = 20, denp2 = 6803.60, pibpercap2 = 33094.37;
    char nome1[30] = ("Fortaleza"), nome2[30] = ("Recife");

    printf("=======Desafio Cartas Super Trunfo=========\n");

    printf("\nCarta 01:\n");
    printf("Estado: Céara\n");
    printf("Nome da cidade: Fortaleza\n");
    printf("Código: C01\n");
    printf("População: 2.578.483 de Habitantes\n");
    printf("Área: 312.3 km²\n");
    printf("PIB: 73 bilhões de R$\n");
    printf("Número de pontos turísticos: 23\n");
    printf("Densidade populacional: 8.172,73 hab/km²\n");
    printf("PIB Per capita: 27.164,45 R$\n");

    printf("\nCarta 02:\n");
    printf("Estado: Pernambuco\n");
    printf("Nome da cidade: Recife\n");
    printf("Código: P02\n");
    printf("População: 1.588.376 de Habitantes\n");
    printf("Área: 218,8 km²\n");
    printf("PIB: 51 milhões de R$\n");
    printf("Número de pontos turísticos: 25 %d\n");
    printf("Densidade populacional: 6.803,60 hab/km²\n");
    printf("PIB Per capita: 33.094,37 R$ \n");

    printf("===========Comaparação de Cartas============\n");

    printf("Escolha o primeiro atributo você quer comparar: \n");
    printf("1. Nomes das cidades\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos turistícos\n");
    printf("6. Densidade populacional\n");
    printf("7. PIB per capita\n");
    printf("Escolha: \n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Os nomes das cidades são %s e %s\n",nome1, nome2);
        break;
    case 2:
        printf("Você escolheu a opção população!\n");
        resultado1 = pop1 > pop2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção Pontos turistícos!\n");
        resultado1 = npt1 > npt2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu a opção densidade populacional!\n");
        resultado1 = denp1 > denp2 ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu a opção PIB per capita!\n");
        resultado1 = pibpercap1 > pibpercap2 ? 1 : 0;
        break;    
    default:
            printf("Opção inválida!");
        break;
    }

    printf("Escolha o segundo atributo você quer comparar: \n");
    printf("1. Nomes das cidades\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos turistícos\n");
    printf("6. Densidade populacional\n");
    printf("7. PIB per capita\n");

    printf("Escolha: \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo!\n");
    }else{
        switch (opcao2)
    {
    case 1:
        printf("Os nomes das cidades são %s e %s\n",nome1, nome2);
        break;
    case 2:
        printf("Você escolheu a opção população!\n");
        resultado2 = pop1 > pop2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção Área!\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção PIB!\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção Pontos turistícos!\n");
        resultado2 = npt1 > npt2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu a opção densidade populacional!\n");
        resultado2 = denp1 > denp2 ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu a opção PIB per capita!\n");
        resultado2 = pibpercap1 > pibpercap2 ? 1 : 0;
        break;    
    default:
            printf("Opção inválida!\n");
        break;
    }


    if (resultado1 && resultado2){
        printf("Carta 01 venceu!\n");
    }else if (resultado1 == resultado2){
        printf("Empatou!\n");
    }else{
        printf("Carta 2 Venceu!");
    }
    }

    
    return 0;
}
