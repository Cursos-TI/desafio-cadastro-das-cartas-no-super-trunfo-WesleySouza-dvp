#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //declarando váriaveis do tipo CHAR dos dados: estado e nome da cidade.
   char  estado[20],nomeCidade[40];
   //declarando váriaveis do tipo INT dos dados: código da carta, população da cidade e número de pontos turísticos.
   int  cCarta, populacao, npt;
   //declarando váriaveis do tipo Float dos dados: PIB, e Área.
   float pib, area;
    
   //Solicitando a Entrada e definindo valores para os dados.
    printf("Primeiro começe digitando os dados da 1° carta\n");

    printf("Digite o Estado da sua cidade:\n");
    fgets(estado,20,stdin);

    printf("Digite o código da sua carta:\n");
    scanf("%d",&cCarta);

    printf("Digite o nome da sua cidade:\n");
    fgets(nomeCidade,40,stdin);

    printf("Digite a população da sua cidade:\n");
    scanf("%d",&populacao);

    printf("Digite a área de sua cidade:\n");
    scanf("%f",&area);

    printf("Digite o PIB de sua cidade:\n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos da sua cidade:\n");
    scanf("%d",&npt);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
