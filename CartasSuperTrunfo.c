#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[3] = "", estado2[3]= "";
    char cidade1[50] , cidade2 [50];
    char codigo1[4] , codigo2[4];
    float area1 , habitantes1 , PIB1 ;
    float area2 , habitantes2 , PIB2 ;
    float densPopulacional1 , densPopulacional2 , perCapita1 , perCapita2;
    int numeroDePontosTuristicos1 , numeroDePontosTuristicos2;

    printf("Cadastros de carta SuperTrunfo.\n");


        // PRIMEIRA CARTA

    printf("Carta1\n");
    printf("Digite o Codigo da carta(1 letra e 2 numeros):");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // usado esse formato pois algumas cidades possuem espaço

    printf("Estado(A a H):");
    scanf("%s" , estado1);

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
    scanf("%s" , estado2);

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
  
        //Carta1
    printf("Carta 1 :\n");;
    printf("Estado : %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n" , cidade1);
    printf("Populacao: %.3f habitantes\n", habitantes1);
    printf("Area: %.3f km²\n", area1);
    printf("PIB: %.3f  bilhoes de reais\n", PIB1);
    printf("-A Quantidade de Pontos turisticos: %d \n\n", numeroDePontosTuristicos1);

        //Carta2 
    printf("Carta 2 :\n");;
    printf("Estado : %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n" , cidade2);
    printf("Populacao: %.3f habitantes\n", habitantes2);
    printf("Area: %.3f km²\n", area1);
    printf("PIB: %.3f  bilhoes de reais\n", PIB2);
    printf("-A Quantidade de Pontos turisticos: %d \n", numeroDePontosTuristicos2);
 
 
    printf("Obrigado!");

    return 0;
}
