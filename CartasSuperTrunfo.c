#include <stdio.h>

int main (){
    char Estado[50];
    char Codigo[50];
    char Cidade[50];
    int populacao;
    float Area;
    float PIB;
    int Numero_de_pontos_turisticos;

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


printf ("\n --- INFORMAÇÕES INSERIDAS ---- \n");
printf ("Código da Carta: %s\n", Codigo);
printf ("Estado:%s\n", Estado);
printf ("Nome da Cidade: %s\n", Cidade);
printf ("População: %d\n", populacao);
printf ("Área em KM²: %f\n", Area);
printf ("PIB: %f\n", PIB);
printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos);


return 0;


}
