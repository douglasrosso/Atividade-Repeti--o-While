#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//4) Elabore um algoritmo que leia v�rios n�meros positivos e imprima, ao final, a m�dia dos n�meros 
	//digitados. 
	float number, sum;
	int counter;
	printf("Enquanto o algarismo for positivo o programa ir� rodar, e ao final mostrar� a m�dia\n");
	printf("Informe um algarismo: ");
	scanf("%f", &number);
	while (number > 0)
	{
		counter++;
		sum+=number;
		printf("Informe um algarismo: ");
		scanf("%f", &number);
	}
	printf("M�dia dos n�meros digitados �: %f", sum/(counter-1));
	
}
