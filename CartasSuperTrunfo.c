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

    int nome[20];
    int estado[2];
    float habitantes;
    int PIB;
    int numero_de_pontos_turisticos;

    printf("Cadastros de carta SuperTrunfo.\n "); 
    
    printf("Digite o nome da cidade:\n ");
    scanf("%s", &nome);
    
    printf("Digite as Siglas do estado:\n ");
    scanf(" %s", &estado);


    printf("Digite a quantidade de Habitantes:\n ");
    scanf(" %d", &habitantes);
    
    printf("Digite Qual é o PIB da cidade:\n ");
    scanf(" %d", &PIB);

    printf("Digite agora o numero de Pontos turisticos da cidade:\n");
    scanf(" %f", &numero_de_pontos_turisticos);

    printf("Cadastro Efetuado com sucesso:\n");
    printf("Cidade: %s, nome");



    return 0;
}
