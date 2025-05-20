#include <stdio.h>
#include <string.h> //garantir que o strcspn seja reconhecido

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main(){

    //variaveis

    char estado1[20], estado2[20];                        //cada carta tem seu estado  
    char cidade1[20], cidade2[20];                       //cada cidade tem sua carta
    char numero1[15], numero2[15];                      // // codigo da carta , usei numero para nao usar a palavra codigo podendo confundir.
    char paises1[20], paises2[20];                      // paises de cada carta

    int populacao1, populacao2, pontos1, pontos2;      // populaçao de cada cidade    //numero de pontos turisticos
    int escolhaJogador;                               // armazena a escolha feita pelo jogador para escolher o atributo correto

    float area1, area2;                              //tamanho de cada cidade de cada carta
    float pib1, pib2;                               //PIB de cada cidade de cada carta 
    float densidade1, densidade2;                            //densidade populaciona 
    float pibpercapita1, pibpercapita2;                        //pib per capita 
    float super1, super2;                            // super poder 
    
    //tela inicial 

    printf("Bem Vindo Ao Super Trunfo \n");                      // tela de bem vindo
   
    //tela de cadastro da 1 carta

    printf("\nVamos cadastrar sua primeira Carta \n");

    printf("\ncrie um codigo unico para essa carta, exemplo: A01 \n");
    scanf("%14s", numero1); // cadastrar o codigo unico da carta 1.

    getchar(); // limpar o buffer apos o scanf

    printf("Qual o nome do País? \n");
    fgets(paises1, sizeof(paises1), stdin);   // ler mais de uma palavra usar o tamanho do array e entrada padrao do teclado
    paises1[strcspn(paises1, "\n")] = '\0';

    printf("Qual o nome da Cidade? \n");
    fgets(cidade1, sizeof(cidade1), stdin);   // ler mais de uma palavra usar o tamanho do array e entrada padrao do teclado
    cidade1[strcspn(cidade1, "\n")] = '\0';   // remover o enter pois o fgets captura o enter substituindo pelo \0

    printf("Qual o Estado dessa cidade? \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';


    printf("Qual o tamanho da area dessa ciade em km²? use numeros\n");
    scanf("%f", &area1);

    printf("Qual o PIB dessa Cidade? use numeros\n");
    scanf("%f", &pib1);

    printf("Qual a Populaçao dessa Cidade? use numero\n");
    scanf("%d", &populacao1);

    printf("Quantos poontos turisticos tem essa Cidade? use numeros\n");
    scanf("%d", &pontos1);

     //variaveis , atribuindo os valores de densidade e pib per capita e super poder 
     densidade1 = (float) populacao1 / area1;
     pibpercapita1 = pib1 / (float) populacao1;
     super1 = (float) populacao1 + (float) pontos1 + area1 + pib1 + pibpercapita1 + (1 / densidade1);



    //cadastro carta 2

    printf("\n"); // dar espaço 

    printf("Tudo certo, Agora vamos cadastrar sua segunda carta! \n");
    printf("\n");

    printf("crie um codigo unico para essa carta,Nao pode ser igual o da carta1 exemplo: A02 \n");
    scanf("%14s", numero2); // cadastrar o codigo unico da carta 1.

    getchar(); // limpar o buffer

    printf("Qual o nome do País? \n");
    fgets(paises2, sizeof(paises2), stdin);   // ler mais de uma palavra usar o tamanho do array e entrada padrao do teclado
    paises2[strcspn(paises2, "\n")] = '\0';

    printf("Qual o nome da Cidade? \n");
    fgets(cidade2, sizeof(cidade2), stdin);   // cadastrar dois nomes , usar o tamanho do array e salvar usando entrada padrao do teclado
    cidade2[strcspn(cidade2, "\n")] = '\0';   // remover o enter

    printf("Qual o Estado dessa cidade? \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Qual o tamanho da area dessa ciade em km²?  use numeros\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa Cidade? use numeros \n");
    scanf("%f", &pib2);

    printf("Qual a Populaçao dessa Cidade? use numeros  \n");
    scanf("%d", &populacao2);

    printf("Quantos poontos turisticos tem essa Cidade? use numeros\n");
    scanf("%d", &pontos2);
     
    
     //  varivaeis ,atribuindo os valores de densidade e pib per capita  carta 2 e super poder
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;
    super2 = (float) populacao2 + (float) pontos2 + area2 + pib2 + pibpercapita2 + (1 / densidade2);
  
    // escolha do atributo para comparar cartas

    printf("\nAgora vamos Comparar os Atributos de suas cartas que vença a melhor\n");
    printf("\nEscolha qual atributo vc deseja comparar: \n");
    printf("1. População\n");
    printf("2. Àrea \n");
    printf("3. Pontos Turísticos\n");
    printf("4. PiB \n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita \n");
    printf("7. Super Poder \n");

    scanf("%d", &escolhaJogador);
    
    switch (escolhaJogador)
    {
    case 1:                               // atributo populaçao com o if else
        printf("\n voce escolheu comparar o atributo população \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("População carta 1: %d - População Carta 2; %d \n", populacao1, populacao2);

        //condição usando if else 

        if (populacao1 > populacao2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (populacao1 < populacao2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;
    
    case 2:                               // atributo area com o if else
        printf("\n voce escolheu comparar o atributo àrea \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("área carta 1: %.2f - área Carta 2; %.2f \n", area1, area2);

        //condição usando if else 

        if (area1 > area2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (area1 < area2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;
        
     case 3:                               // atributo pontos turistico com o if else
        printf("\n voce escolheu comparar o atributo Pontos Turístico; \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("Pontos Turísticos carta 1: %d - Pontos Turísticos Carta 2; %d \n", pontos1, pontos2);

        //condição usando if else 

        if (pontos1 > pontos2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (pontos1 < pontos2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;

     case 4:                               // atributo pib com o if else
        printf("\n voce escolheu comparar o atributo PIB \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("PIB carta 1: %.2f - PIB Carta 2; %.2f \n", pib1, pib2);

        //condição usando if else 

        if (pib1 > pib2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (pib1 < pib2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;

     case 5:                               // atributo densidade demografica com o if else
        printf("\n voce escolheu comparar o atributo densidade demografica Lembrando que a menor Ganha: \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("Densidade demografíca carta 1: %.2f - denssidade demografica Carta 2; %.2f \n", densidade1, densidade2);

        //condição usando if else 

        if (densidade1 < densidade2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (densidade1 > densidade2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;

    case 6:                               // atributo pib per capita com o if else
        printf("\n voce escolheu comparar o atributo PIB Per Capita: \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("PIB Per Capita carta 1: %.2f - PIB Per Capita Carta 2; %.2f \n", pibpercapita1, pibpercapita2);

        //condição usando if else 

        if (pibpercapita1 > pibpercapita2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (pibpercapita1 < pibpercapita2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;

    case 7:                               // atributo super poder com o if else
        printf("\n voce escolheu comparar o atributo super poder \n");
        printf("\n País carta 1: %s - país carta 2: %s \n", paises1, paises2);
        printf("Super poder carta 1: %.2f - Super poder Carta 2; %.2f \n", super1, super2);

        //condição usando if else 

        if (super1 > super2)
        {
            printf("\n Parabéns a Carta 1 Venceu !! \n");
        } else if (super1 < super2)
        {
            printf("\n Parabens a Carta 2 Venceu !! \n");
        } else {
            printf("\n Houve Um Empate \n");
        }
        break;

    default:
        printf("Opção Invalida !! \n");
        break;
    }

    //agradecer por ter jogado
    printf("\n Obrigado por Jogar Super Trunfo \n");

    return 0;
}

