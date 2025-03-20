#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int populacao, populacao2, qntPontosTuristicos, qntPontosTuristicos2, carta;
    float area, area2, pib, pib2;
    char estado, estado2;
    char id[5], id2[7];
    char cidade[10], cidade2 [10];

    printf("Para o card 1 Defina o Estado\n");
    scanf("%c\0\n",&estado);
    
    srand(time(NULL));
    carta =  rand () % (3 - 1 + 1) + 1;
    
   printf("\nPara o card 1 Defina o Cidade\n");
    scanf("%s\0\n",cidade);
    
    printf("\nPara o card 1 Defina o População\n");
    scanf("%d",&populacao,"\n");
    
    printf("\nPara o card 1 Defina a Quantidade de Pontos Turisticos\n");
    scanf("%i",&qntPontosTuristicos,"\n");

    printf("\nPara o card 1 Defina o Área\n");
    scanf("%f",&area,"\n");//1.571,00km²

    printf("\nPara o card 1 Defina o PIB\n");
    scanf("%f",&pib,"\n");

    printf("O Cudade escolhido foi: %c\n", estado);
    printf("O Codigo da Carta é: %c0%d\n",estado,carta);
    printf("O Estado escolhido foi: %s\n", cidade);
    printf("O valor definido foi: %d\n",populacao);
    printf("O valor definido foi: %i\n",qntPontosTuristicos);
    printf("O valor definido foi: %.3fkm²\n",area);
    printf("O valor definido foi: %.2fR$ blilhões\n",pib);

    //-------------------------------------------------------------

    printf("\nPara o card 2 Defina o Estado\n");
    scanf("%c\0\n",&estado2);
    estado2 = getchar();

    carta =  rand () % (3 - 1 + 1) + 1;
    
    printf("\nPara o card 2 Defina a Cidade\n");
    scanf("%s\0\n",cidade2);
    
    printf("\nPara o card 2 Defina o População\n");
    scanf("%d",&populacao2,"\n");
    
    printf("\nPara o card 2 Defina a Quantidade de Pontos Turisticos\n");
    scanf("%i",&qntPontosTuristicos2,"\n");

    printf("\nPara o card 2 Defina o Área\n");
    scanf("%f",&area2,"\n");

    printf("\nPara o card 2 Defina o PIB\n");
    scanf("%f",&pib2,"\n");

    printf("\nO Estado escolhida foi: %c\n", estado2);
    printf("O Codigo da Carta é: %c0%d\n",estado2,carta);
    printf("O Cidade escolhido foi: %s\n", cidade2);
    printf("O valor definido foi: %d\n",populacao2);
    printf("O valor definido foi: %i\n",qntPontosTuristicos2);
    printf("O valor definido foi: %.3fkm²\n",area2);
    printf("O valor definido foi: %.2fR$ blilhões\n",pib2);

    return 0;
}