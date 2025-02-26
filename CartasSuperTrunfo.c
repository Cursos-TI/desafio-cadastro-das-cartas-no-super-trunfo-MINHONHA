#include <stdio.h>

int main (){
    char Estado[50];
    char Codigo[50];
    char Cidade[50];
    int populacao;
    float Area;
    float PIB;
    int Numero_de_pontos_turisticos;

    // DADOS DA PRIMERA CARTA 

printf ("Digite seu Estado: ");
scanf ("%s", Estado);

printf ("Digite seu Código: ");
scanf ("%s", Codigo);

printf ("Digite sua Cidade: ");
scanf ("%s", Cidade);

printf ("Digite sua População: ");
scanf ("%d", &populacao);

printf ("Digite a Área em Km²: ");
scanf ("%f", &Area);

printf ("Digite o PIB: ");
scanf ("%f", &PIB);


printf ("Digite o Número de pontos turísticos: ");
scanf ("%d", &Numero_de_pontos_turisticos);

// EXIBIÇÃO DA PRIMEIRA CARTA

printf ("\n *** CARTA NÚMERO 01 *** \n");
printf ("Codigo da Carta: %s\n", Codigo);
printf ("Estado:%s\n", Estado);
printf ("Nome da Cidade: %s\n", Cidade);
printf ("Populacao: %d\n", populacao);
printf ("Area em KM2: %f\n", Area);
printf ("PIB: %f\n", PIB);
printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos);

    // DADOS DA SEGUNDA CARTA 

    printf ("Digite seu Estado: ");
    scanf ("%s", Estado);
    
    printf ("Digite seu Código: ");
    scanf ("%s", Codigo);
    
    printf ("Digite sua Cidade: ");
    scanf ("%s", Cidade);
    
    printf ("Digite sua População: ");
    scanf ("%d", &populacao);
    
    printf ("Digite a Área em Km²: ");
    scanf ("%f", &Area);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB);
    
    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &Numero_de_pontos_turisticos);
    
    // EXIBIÇÃO DA SEGUNDA CARTA
    
    printf ("\n *** CARTA NÚMERO 02 *** \n");
    printf ("Codigo da Carta: %s\n", Codigo);
    printf ("Estado:%s\n", Estado);
    printf ("Nome da Cidade: %s\n", Cidade);
    printf ("Populacao: %d\n", populacao);
    printf ("Area em KM2: %f\n", Area);
    printf ("PIB: %f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos);


return 0;

}


