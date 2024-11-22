#include <stdio.h>
#include <stdlib.h>

int main() {
   
   
    
    char estado; //AQUI SERA ATRIBUIDO A LETRA QUE REPRESENTA CADA ESTADO

    char codigo_da_cidade[4]; //AQUI SERA ATRIBUIDO O CODIGO QUE REPRESENTA CADA CIDADE

    int populacao; //AQUI SERA ATRIBUIDO A POPULÇAO DE CADA CIDADE

    int pontos_turisticos; //AQUI SERA ATRIBUIDO OS PONTOS TURISTICOS DE CADA CIDADE

    float area; //AQUI SERA ATRIBUIDO ÁREA DE CADA CIDADE

    float pib; //AQUI SERA INSERIDO O PIB DA CIDADE

    float Densidade_Populacional; //População dividida pela área da cidade

    float PIB_per_Capita; //PIB total dividido pela população
    

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


    //PRIMEIRO ESTADO A
        printf("Insira o primeiro estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE A1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //SEGUNDA CIDADE A2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //TERCEIRA CIDADE A3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //QUARTA CIDADE A4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);
       

    //SEGUNDO ESTADO B
        printf("Insira o segundo estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE B1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //SEGUNDA CIDADE B2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //TERCEIRA CIDADE B3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //QUARTA CIDADE B4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //TERCEIRO ESTADO C
        printf("Insira o terceiro estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE C1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SEGUNDA CIDADE C2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //TERCEIRA CIDADE C3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //QUARTA CIDADE C4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //QUARTO ESTADO D
        printf("Insira o quarto estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE D1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SEGUNDA CIDADE D2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //TERCEIRA CIDADE D3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //QUARTA CIDADE D4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //QUINTO ESTADO E
        printf("Insira o quinto estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE E1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SEGUNDA CIDADE E2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //TERCEIRA CIDADE E3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //QUARTA CIDADE E4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //SEXTO ESTADO F
        printf("Insira o sexto estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE F1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SEGUNDA CIDADE F2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //TERCEIRA CIDADE F3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //QUARTA CIDADE F4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SETIMO ESTADO G
        printf("Insira o setimo estado: ");
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE G1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SEGUNDA CIDADE G2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //TERCEIRA CIDADE G3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //QUARTA CIDADE G4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //OITAVO ESTADO H
        printf("Insira o oitavo estado: "); 
        scanf(" %c", &estado);

    //PRIMEIRA CIDADE H1
        printf("Insira a primeira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //SEGUNDO ESTADO H2
        printf("Insira a segunda cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);

    //TERCEIRO ESTADO H3
        printf("Insira a terceira cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    //QUARTO ESTADO H4
        printf("Insira a quarta cidade: ");
        scanf(" %s", codigo_da_cidade);

        printf("Insira a população da cidade: ");
        scanf(" %d", &populacao);

        printf("Insira a área da cidade: ");
        scanf(" %f", &area);

        printf("Insira o PIB da cidade: ");
        scanf(" %f", &pib);

        printf("Insira o numero de pontos turisticos: ");
        scanf(" %d", &pontos_turisticos);

        Densidade_Populacional =  populacao/area;

        printf("Densidade Populacional: %.f\n", Densidade_Populacional);

        PIB_per_Capita = pib/populacao;

        printf("PIB per Capita: %.f\n", PIB_per_Capita);


    return 0;
}
