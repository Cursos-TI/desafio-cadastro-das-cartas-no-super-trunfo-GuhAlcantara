#include <stdio.h>



int main()
{
    char estado1[3], estado2[3];
    char cidade1[50], cidade2[50];
    char codigo1[4], codigo2[4];
    float area1, habitantes1, PIB1;
    float area2, habitantes2, PIB2;
    float densPopulacional1, densPopulacional2, perCapita1, perCapita2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    int resultado1 , resultado2 , resultado3 , resultado4, resultado5 , resultado6, resultado7;
    


    printf("Cadastros de carta SuperTrunfo.\n");

    // PRIMEIRA CARTA

    printf("Carta1\n");
    printf("Digite o Codigo da carta(1 letra e 2 numeros):");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // usado esse formato pois algumas cidades possuem espaço

    printf("Estado(A a H):");
    scanf("%s", estado1);

    printf("Digite a quantidade de Habitantes: ");
    scanf(" %f", &habitantes1);

    printf("Digite qual a area da cidade: ");
    scanf(" %f", &area1);

    printf("Digite Qual é o PIB da cidade: ");
    scanf(" %f", &PIB1);

    printf("Digite agora o numero de Pontos turisticos da cidade: ");
    scanf(" %d", &numeroDePontosTuristicos1);

    // SEGUNDA CARTA
    printf("\n\nCarta2: \n");
    printf("Digite o Codigo da carta(1 letra e 2 numeros):");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // usado esse formato pois algumas cidades possuem espaço

    printf("Estado(A a H):");
    scanf("%s", estado2);

    printf("Digite a quantidade de Habitantes: ");
    scanf(" %f", &habitantes2);

    printf("Digite qual a area da cidade: ");
    scanf(" %f", &area2);

    printf("Digite Qual é o PIB da cidade: ");
    scanf(" %f", &PIB2);

    printf("Digite agora o numero de Pontos turisticos da cidade: ");
    scanf(" %d", &numeroDePontosTuristicos2);

    // a partir daqui sera feita a impressão dos resultados

    printf("\n-Cadastro feito com Sucesso: \n");
    printf("*********************************\n\n");

    // Carta1
    printf("Carta 1 :\n");
    ;
    printf("Estado : %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %.3f habitantes\n", habitantes1);
    printf("Area: %.3f km²\n", area1);
    printf("PIB: %.3f bilhoes de reais\n", PIB1);
    printf("Pontos turisticos: %d \n", numeroDePontosTuristicos1);

    perCapita1 = PIB1 / habitantes1;
    printf("Renda PerCapita: %f\n", perCapita1);

    densPopulacional1 = habitantes1 / area1;
    printf("Densidade populacional: %.2f\n\n", densPopulacional1);

    // Carta2
    printf("Carta 2 :\n");
    ;
    printf("Estado : %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %.3f habitantes\n", habitantes2);
    printf("Area: %.3f km²\n", area1);
    printf("PIB: %.3f bilhoes de reais\n", PIB2);
    printf("Pontos turisticos: %d \n", numeroDePontosTuristicos2);

    perCapita2 = PIB2 / habitantes2;
    printf("Renda PerCapita: %f\n", perCapita2);

    densPopulacional2 = habitantes2 / area2;
    printf("Densidade populacional: %.2f \n\n", densPopulacional2);

    //Impressao dos resultados de comparação
    resultado1 = habitantes1 > habitantes2;
        printf("%s (carta1) tem maior populaçao que a  %s (carta2) : %d\n" , cidade1 , cidade2 , resultado1);
    resultado2 = area1 > area2 ;
        printf("%s (carta1) tem maior area que  %s (carta2) : %d\n" , cidade1 , cidade2 , resultado2 );
    resultado3 = PIB1 > PIB2 ;
        printf("%s (carta1) tem maior PIB que %s (carta2) : %d\n", cidade1 , cidade2 , resultado3);
    resultado4 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2;
        printf("%s (carta1) tem mais ponto turisticos que %s (carta2) : %d\n", cidade1 , cidade2 , resultado4);
    resultado5 = perCapita1 > perCapita2;
        printf("%s (carta1) tem maior renda PerCapita que %s (carta2) : %d\n", cidade1 , cidade2 , resultado5);
    resultado6 = densPopulacional1 > densPopulacional2;;
        printf("%s tem uma densidade populacional maior que %s (carta2) : %d\n\n", cidade1 , cidade2 , resultado6);

    // SUPER PODER (Soma de todos os valores)
    
    float superpoder1 = area1 + PIB1 + numeroDePontosTuristicos1 + perCapita1;
    float superpoder2 = area2 + PIB2 + numeroDePontosTuristicos2 + perCapita2;

    printf("%s (carta1) Super Poder de : %f\n", cidade1 , superpoder1);
    printf("%s (carta2) Super Poder de : %f\n", cidade2 , superpoder2);

    resultado7 = superpoder1 > superpoder2;
        printf("%s (carta1) tem o Super Poder maior que %s (carta2) : %d\n\n", cidade1 , cidade2 , resultado7);

    printf("Obrigado!");

    return 0;
}
