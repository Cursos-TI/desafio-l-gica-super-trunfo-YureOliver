#include <stdio.h>
#include <ctype.h>
#include <string.h>

void limpa_linha() {
    scanf("%*[^\n]"); /* Lê todos os caracteres "indesejados" e descarta os mesmos, exceto o '\n' */
    scanf("%*c"); /* Lê o caractere '\n' e descarta o mesmo, limpando assim o stdin */ 
}

int main(){

    //VARIAVÉIS

    char cidade[20], cidade1[20], estado[20], estado1[20], codigo[10], codigo1[10], pais[20], pais1[20];
    int populacao, populacao1, pturistico, pturistico1;
    double area, area1, pib, pib1;


    //ENTRADA DE DADOS CARTA 1

    printf("BEM VINDOS AO JOGO SUPER TRUNFO EM C!\n");
    printf("PARA COMEÇAR, PRECISO QUE VOCÊ ESCOLHA UMA CIDADE E DOIS ESTADOS.\n");
    printf("VAMOS LÁ!\n\n");
    printf("CARTA 1\n");
    printf("QUAL O PAÍS:");
    scanf("%[^\n]", pais);
    limpa_linha();
    printf("QUAL O ESTADO:");
    scanf("%[^\n]", estado);
    limpa_linha();
    printf("CODIGO DA CARTA:");
    scanf("%[^\n]", codigo);
    limpa_linha();
    printf("NOME DA CIDADE:");
    scanf("%[^\n]", cidade);
    limpa_linha();
    printf("QUAL A POPULAÇÃO:");
    scanf("%d", &populacao);
    limpa_linha();
    printf("QUAL A AREA:");
    scanf("%lf", &area);
    limpa_linha();
    printf("QUAL O PIB:");
    scanf("%lf", &pib);
    limpa_linha();
    printf("QUANTIDADE DE PONTOS TURÍSTICOS:");
    scanf("%d", &pturistico);
    limpa_linha();
    printf("CARTA CADASTRADA!\n\n");

    //ENTRADA DE DADOS CARTA 2

    printf("CARTA 2\n");
    printf("QUAL O PAÍS:");
    scanf("%[^\n]", pais1);
    limpa_linha();
    printf("QUAL O ESTADO:");
    scanf("%[^\n]", estado1);
    limpa_linha();
    printf("CODIGO DA CARTA:");
    scanf("%[^\n]", codigo1);
    limpa_linha();
    printf("NOME DA CIDADE:");
    scanf("%[^\n]", cidade1);
    limpa_linha();
    printf("QUAL A POPULAÇÃO:");
    scanf("%d", &populacao1);
    limpa_linha();
    printf("QUAL A AREA:");
    scanf("%lf", &area1);
    limpa_linha();
    printf("QUAL O PIB:");
    scanf("%lf", &pib1);
    limpa_linha();
    printf("QUANTIDADE DE PONTOS TURÍSTICOS:");
    scanf("%d", &pturistico1);
    limpa_linha();
    printf("CARTA CADASTRADA!\n\n");

    //CALCULOS DE DENSIDADE POPULACIONAL E PIB PER CAPITA

    double dpopulacional = populacao/area;
    double dpopulacional1 = populacao1/area1;
    double pibpc = pib/populacao;
    double pibpc1 = pib1/populacao1;
    double sp = populacao + area + pib + pturistico + dpopulacional + pibpc;
    double sp1 = populacao1 + area1 + pib1 + pturistico1 + dpopulacional1 + pibpc1;
    double superpoder = populacao + area + pib + pturistico + pibpc + (1 / dpopulacional);
    double superpoder1 = populacao1 + area1 + pib1 + pturistico1 + pibpc1 + (1 / dpopulacional1);

    //SAIDA DE DADOS CARTA 1

    printf(" =§=§=§=§=§= CARTA 1 =§=§=§=§=§= \n\n");
    printf("PAÍS: %s\n", pais);
    printf("ESTADO: %s\n", estado);
    printf("CODIGO: %s01\n", codigo);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %.2lf KM²\n", area);
    printf("PIB: %.2lf BILHÕES DE REAIS\n", pib);
    printf("PONTOS TURÍSTICOS: %d\n", pturistico);
    printf("A DENSIDADE POPULACIONAL É: %lf HAB/KM²\n", dpopulacional);
    printf("O PIB PER CAPITA É: %lf REAIS\n", pibpc);
    printf("SUPER PODER É: %lf\n", superpoder);

    //SAIDA DE DADOS CARTA 2

    printf(" \n\n=§=§=§=§=§= CARTA 2 =§=§=§=§=§= \n\n");
    printf("PAÍS: %s\n", pais1);
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s02\n", codigo1);
    printf("NOME DA CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2lf KM²\n", area1);
    printf("PIB: %.2lf BILHÕES DE REAIS\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pturistico1);
    printf("A DENSIDADE POPULACIONAL É: %lf HAB/KM²\n", dpopulacional1);
    printf("O PIB PER CAPITA É: %lf REAIS\n", pibpc1);
    printf("SUPER PODER É: %lf\n", superpoder1);


    //COMPARAÇÃO DE CARTAS

    int atributo;
    printf("\n\nAGORA VAMOS INICIAR AS COMPARAÇÕES!\n");
    printf("1 - PARA POPULAÇÃO.\n");
    printf("2 - PARA ÁREA.\n");
    printf("3 - PARA PIB.\n");
    printf("4 - PARA PONTOS TURÍSTICOS.\n");
    printf("5 - PARA DENSIDADE POPULACIONAL\n");
    printf("6 - PARA PIB PER CAPITA.\n");
    printf("7 - PARA SUPER PODER.\n");
    printf("QUAL ATRIBUTO VOCÊ DESEJA COMPARAR?");
    scanf("%d", &atributo);
  
    switch (atributo)
    {
    case 1:
      if (populacao < populacao1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO POPULAÇÃO:\n");
        printf("CARTA 1  (%d) --- ", populacao);
        printf("CARTA 2  (%d)\n\n", populacao1);
        printf("====CARTA 2 VENCEU!====");

      } else if (populacao > populacao1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO POPULAÇÃO:\n");
        printf("CARTA 1  (%d) --- ", populacao);
        printf("CARTA 2  (%d)\n\n", populacao1);
        printf("====CARTA 1 VENCEU!====");
      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO POPULAÇÃO:\n");
        printf("CARTA 1  (%d) --- ", populacao);
        printf("CARTA 2  (%d)\n\n", populacao1);
        printf("====NO ATRIBUTO POPULAÇÃO, DEU EMPATE!====");
      }
      break;
    case 2:
      if (area < area1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO ÁREA:\n");
        printf("CARTA 1  (%lf) --- ", area);
        printf("CARTA 2  (%lf)\n\n", area1);
        printf("====CARTA 2 VENCEU!====");

      } else if (area > area1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO ÁREA:\n");
        printf("CARTA 1  (%lf) --- ", area);
        printf("CARTA 2  (%lf)\n\n", area1);
        printf("====CARTA 1 VENCEU!====");

      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO ÁREA:\n");
        printf("CARTA 1  (%lf) --- ", area);
        printf("CARTA 2  (%lf)\n\n", area1);
        printf("====NO ATRIBUTO ÁREA, DEU EMPATE!====");
      }
      break;
    case 3:
      if (pib < pib1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PIB:\n");
        printf("CARTA 1  (%lf) --- ", pib);
        printf("CARTA 2  (%lf)\n\n", pib1);
        printf("====CARTA 2 VENCEU!====");
      } else if (pib > pib1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PIB:\n");
        printf("CARTA 1  (%lf) --- ", pib);
        printf("CARTA 2  (%lf)\n\n", pib1);
        printf("====CARTA 1 VENCEU!====");

      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO POPULAÇÃO:\n");
        printf("CARTA 1  (%lf) --- ", pib);
        printf("CARTA 2  (%lf)\n\n", pib1);
        printf("====NO ATRIBUTO PIB, DEU EMPATE!====");
      }
      break;
    
    case 4:
      if (pturistico < pturistico1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PONTOS TURÍSTICOS:\n");
        printf("CARTA 1  (%d) --- ", pturistico);
        printf("CARTA 2  (%d)\n\n", pturistico1);
        printf("====CARTA 2 VENCEU!====");

      } else if (pturistico > pturistico1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PONTOS TURÍSTICOS:\n");
        printf("CARTA 1  (%d) --- ", pturistico);
        printf("CARTA 2  (%d)\n\n", pturistico1);
        printf("====CARTA 1 VENCEU!====");

      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO POPULAÇÃO:\n");
        printf("CARTA 1  (%d) --- ", pturistico);
        printf("CARTA 2  (%d)\n\n", pturistico1);
        printf("====NO ATRIBUTO PONTOS TURÍSTICOS, DEU EMPATE!====");
      }
      break;
    case 5:
      if (dpopulacional > dpopulacional1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO DENSIDADE POPULACIONAL:\n");
        printf("CARTA 1  (%lf) --- ", dpopulacional);
        printf("CARTA 2  (%lf)\n\n", dpopulacional1);
        printf("====CARTA 2 VENCEU!====");

      } else if (dpopulacional < dpopulacional1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO DENSIDADE POPULACIONAL:\n");
        printf("CARTA 1  (%lf) --- ", dpopulacional);
        printf("CARTA 2  (%lf)\n\n", dpopulacional1);
        printf("====CARTA 1 VENCEU!====");

      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s)--- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO DENSIDADE POPULACIONAL:\n");
        printf("CARTA 1  (%lf) --- ", dpopulacional);
        printf("CARTA 2  (%lf)\n\n", dpopulacional1);
        printf("====NO ATRIBUTO DENSIDADE POPULACIONAL, DEU EMPATE!====");
      }
      break;
    case 6:
      if (pibpc < pibpc1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PIB PER CAPITA:\n");
        printf("CARTA 1  (%lf) --- ", pibpc);
        printf("CARTA 2  (%lf)\n\n", pibpc1);
        printf("====CARTA 2 VENCEU!====");

      }else if (pibpc > pibpc1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PIB PER CAPITA:\n");
        printf("CARTA 1  (%lf) --- ", pibpc);
        printf("CARTA 2  (%lf)\n\n", pibpc1);
        printf("====CARTA 1 VENCEU!====");

      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO PIB PER CAPITA:\n");
        printf("CARTA 1  (%lf) --- ", pibpc);
        printf("CARTA 2  (%lf)\n\n", pibpc1);
        printf("====NO ATRIBUTO PIB PER CAPITA, DEU EMPATE!====");
      }
      break;
    case 7:
      if (superpoder < superpoder1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO SUPER PODER:\n");
        printf("CARTA 1  (%lf) --- ", superpoder);
        printf("CARTA 2  (%lf)\n\n", superpoder1);
        printf("====CARTA 2 VENCEU!====");

      }else if (superpoder > superpoder1)
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO SUPER PODER:\n");
        printf("CARTA 1  (%lf) --- ", superpoder);
        printf("CARTA 2  (%lf)\n\n", superpoder1);
        printf("====CARTA 1 VENCEU!====");

      } else
      {
        printf("PAÍS:\n");
        printf("CARTA 1  (%s) --- ", pais);
        printf("CARTA 2  (%s)\n\n", pais1);
        printf("ATRIBUTO SUPER PODER:\n");
        printf("CARTA 1  (%lf) --- ", superpoder);
        printf("CARTA 2  (%lf)\n\n", superpoder1);
        printf("====NO ATRIBUTO SUPER PODER, DEU EMPATE!====");
      }
      break;
    default:
      printf("opção invalida! tente novamente");
    }
return 0;
}