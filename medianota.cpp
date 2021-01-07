#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite sua primeira nota \n");
	scanf("%f", &nota1); 
	
		printf("Digite sua segunda nota \n");
	scanf("%f", &nota2); 
	
		printf("Digite sua terceira nota \n");
	scanf("%f", &nota3); 
	
		printf("Digite sua quarta nota \n");
	scanf("%f", &nota4);
	
	media=(nota1+nota2+nota3+nota4)/4;
	
	if (media>=7)
	printf("Parabens vc passou! \n");
	
	else
	printf("Aluno nao passou \n");
	
	system("pause");
	
	return 0;	
	
}
