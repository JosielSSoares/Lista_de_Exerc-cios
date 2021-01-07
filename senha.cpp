#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a;
	
	printf ("Digite a senha de 5 digitos:");
	scanf("%d", &a);
	
	if (a== 12345)
	{
		printf("Acesso permitido! \n");
	}
	else {
	 printf ("Acesso Negado! \n");	
	}	

	system("pause");
	return 0;
}
