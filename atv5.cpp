#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int op;
	float n1, n2, res;
	
	printf("Selecione a operação:\n");
	printf("1- Soma \n");
	printf("2- Subtração \n");
	printf("3- Multiplicacao \n");
	scanf("%i", &op);
	printf("Digite N1:\n");
	scanf("%f", &n1);
	printf("Digite N2:\n");
	scanf("%f", &n2);
		switch(op)
		{
			case 1:
			res=n1+n2;
			printf("A operacao selecionada foi soma");
			printf("Resultado %f\n",res);
			break;
				
				case 2:
				res=n1-n2;
				printf("A peracao selecionada foi subtracao");
				printf("Resultado %f\n",res);
				break;
				
				case 3:
					res=n1*n2;
					printf("A operacao selecionada foi multiplicacao");
					printf("Resultado %f\n",res);
					break;
					
					case 4:
						res=n1/n2;
						printf("A operacao selecionada foi divisao");
						printf("Resultado %f\n", res);
						break;
					
		}
	
	
	
	
	
	system("pause");
	return 0;
}
