#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//3) Elabore um algoritmo que leia v�rios n�meros enquanto forem positivos e imprima, ao final, quantos 
	//n�meros foram digitados.
	float number;
	int counter;
	printf("Enquanto o algarismo for positivo o programa ir� rodar, e ao final mostrar� o total\n");
	printf("Informe um algarismo: ");
	scanf("%f", &number);
	while (number > 0)
	{
		counter++;
		printf("Informe um algarismo: ");
		scanf("%f", &number);
	}
	printf("Quantidade n�mero foram digitados: %d", counter);
	
}
