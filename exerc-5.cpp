#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//5) Elabore um algoritmo que leia v�rios n�meros, e imprima o maior, menor e a m�dia aritm�tica dos 
	//n�meros. Considere que o n�mero zero (0) finaliza a entrada de dados e n�o faz parte da 
	//seq��ncia. 
	int num, maior=-99999, menor=99999;
	float soma=0, cont=0;
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	while (num != 0)
	{
		soma+=num;
		cont++;
		if (num < menor)
		{
			menor=num;
		}
		if (num > maior)
		{
			maior=num;
		}
		
		printf("Informe um n�mero: ");
		scanf("%d", &num);
	}
	printf("Maior n�mero: %d\n", maior);
	printf("Menor n�mero: %d\n", menor);
	printf("M�dia aritm�tica: %.2f\n", soma/cont);

}
	
