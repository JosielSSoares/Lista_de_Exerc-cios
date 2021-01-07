#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int numero;
	int divisor;
	int resto;
	
	printf("Digite um numero:");
	scanf("%d", &numero);
	for(divisor=1; divisor<=numero; divisor++)
	{
		resto=numero%divisor;
		if(resto==0)
		{
			printf("Divisor encontrado: %d\n", divisor);
		
		}
	}
	system("pause");
	return 0;
}

