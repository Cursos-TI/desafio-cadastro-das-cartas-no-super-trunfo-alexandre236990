#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   
    //AQUI SERA ATRIBUIDO A LETRA QUE REPRESENTA CADA ESTADO
    char A;
    char B;
    char C;
    char D;
    char E;
    char F;
    char G;
    char H;

    char codigo_da_cidade[4]; //AQUI SERA ATRIBUIDO O CODIGO QUE REPRESENTA CADA CIDADE

    int populacao; //AQUI SERA ATRIBUIDO A POPULÇAO DE CADA CIDADE

    int pontos_turisticos; //AQUI SERA ATRIBUIDO OS PONTOS TURISTICOS DE CADA CIDADE

    float area; //AQUI SERA ATRIBUIDO ÁREA DE CADA CIDADE

    float pib; //AQUI SERA INSERIDO O PIB DA CIDADE
    

    //MENSAGEM DE BOAS VINDAS AO JOGAGOR
    printf("*********************************************************\n");
    printf("*********** OLA SEJA BEM VINDO AO SUPER TRUNFO***********\n");
    printf("*********************************************************\n\n\n");

    //REGARS DO JOGO
    printf("*********************************************************\n"); 
    printf("                REGRAS DO JOGO \n"); 
    printf("*********************************************************\n"); 
    printf("1. Cada país é dividido em 8 estados (A a H).\n"); 
    printf("2. Cada estado tem 4 cidades (1 a 4).\n"); 
    printf("3. O código da carta é a combinação da letra \n"); 
    printf(" do estado e o número da cidade (ex: A01).\n"); 
    printf("4. Cada carta representa uma cidade e possui:\n"); 
    printf(" - População\n"); 
    printf(" - Área\n"); 
    printf(" - PIB\n"); 
    printf(" - Pontos turísticos\n"); 
    printf("5. O objetivo é cadastrar e exibir os dados \n"); 
    printf(" das cidades de forma organizada.\n\n"); 
    printf("*********************************************************\n"); 
    printf("            PREPARE-SE PARA JOGAR! \n"); 
    printf("*********************************************************\n\n\n");



    printf("Insira o primeiro estado: ");
    scanf(" %c", &A);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);
       


    printf("Insira o segundo estado: ");
    scanf(" %c", &B);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    printf("Insira o terceiro estado: ");
    scanf(" %c", &C);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    printf("Insira o quarto estado: ");
    scanf(" %c", &D);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    printf("Insira o quinto estado: ");
    scanf(" %c", &E);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    printf("Insira o sexto estado: ");
    scanf(" %c", &F);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    printf("Insira o setimo estado: ");
    scanf(" %c", &G);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    printf("Insira o oitavo estado: ");
    scanf(" %c", &H);

    printf("Insira a primeira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a segunda cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a terceira cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("Insira a quarta cidade: ");
    scanf(" %s", &codigo_da_cidade);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);



    return 0;
}
