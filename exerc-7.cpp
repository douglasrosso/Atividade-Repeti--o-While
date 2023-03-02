#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	/*7) Elabore um algoritmo que leia a idade e o estado civil (C � casado, S � solteiro, V � vi�vo, e D �
	desquitado ou separado) de v�rias pessoas. Considere que o algoritmo termina quando se digita um 
	n�mero menor do que 0 para a idade. Ao final, calcule e imprima: 
	a. A quantidade de pessoas casadas; 
	b. A quantidade de pessoas solteiras; 
	c. A m�dia das idades das pessoas vi�vas; 
	d. A porcentagem de pessoas desquitadas ou separadas, dentre todas as pessoas analisadas.*/
	
	char estadoC;
	int age, solteiros=0, casados=0;
	float counter=0, viuvos=0, separados=0, cont=0;
	
	printf("Enquanto a idade for maior que 0 o programa ir� rodar\n");
	printf("\nInforme a idade: ");
	scanf("%d", &age);
	
	while (age > 0)
	{
		printf("\nC � casado, S � solteiro, V � vi�vo, e D � desquitado ou separado\n");
		printf("\nInforme seu Estado Civil: ");
		fflush(stdin);
		scanf("%c", &estadoC);
		
		if (estadoC == 'c' or estadoC == 'C')
		{
			casados++;
		} else if (estadoC == 's' or estadoC == 'S')
		{
			solteiros++;
		}
		else if (estadoC == 'v' or estadoC == 'V')
		{
			viuvos+=age;
			counter++;
		} else if (estadoC == 'd' or estadoC == 'D')
		{
			separados++;
		} else
		{
			printf("Estado Civil inv�lido, tente novamente.");
		}
		
		cont++;
		printf("\n----------------------------------------------------------\n");
		printf("\nInforme a idade: ");
		scanf("%d", &age);
		
		
	}
	
	printf("\n----------------------------------------------------------\n");
	printf("\nTotal de pessoas casadas �: %d\n", casados);
	printf("Total de pessoas solteiras �: %d\n", solteiros);
	printf("M�dia das idades das pessoas vi�vas �: %.2f\n", viuvos/counter);
	printf("A porcentagem de pessoas desquitadas ou separadas �: %.1f%%\n", (separados/cont)*100);
	
}
