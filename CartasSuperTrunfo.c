#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char nome[50] = ("Qual sua cidade?");
    int area;
    int habitantes;
    int PIB;
    int numero_de_pontos_turisticos;

    printf("Cadastros de carta SuperTrunfo.\n "); 
    
    printf("Digite o nome da cidade:\n ");
    scanf("%50[^\n]", nome); //usado esse formato pois algumas cidades possuem espaço
    
    printf("Digite a quantidade de Habitantes:\n ");
    scanf(" %d", &habitantes);
    
    printf("Digite qual a area da cidade:\n");
    scanf(" %d", &area);

    printf("Digite Qual é o PIB da cidade:\n");
    scanf(" %d", &PIB);

    printf("Digite agora o numero de Pontos turisticos da cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos);

    //a partir daqui sera feita a impressão dos resultados

    printf("\n-Cadastro feito com Sucesso:\n");
    printf("\n-Cidade:\n %s \n", nome);
    printf("-Habitantes:\n %d \n", habitantes);
    printf("-A area da cidade é:\n %d \n", area);
    printf("-O PIB da cidade:\n %d \n", PIB);
    printf("-A Quantidade de Pontos turisticos:\n %d \n", numero_de_pontos_turisticos);
    printf("Obrigado!");


    return 0;
}
