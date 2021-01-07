#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int n=1, impar=1, par=0;
	while(n>0)
	{
		printf("Digite 0 para ver o resultado \n");
		printf("Digite um numero: ");
		scanf("%i", &n);
		
			if(n%2==0){
				par=par+n;
			}
			else{
				impar=impar*n;
			}
	}
	printf("Soma dos Pares: %i \n", par);
	printf("Produto dos impares: %i\n", impar);
	system("pause");
	
	return 0;
}
