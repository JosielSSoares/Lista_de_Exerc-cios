#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int maior=0,
	num,
	count=1;
	
	while (count<=10)
	{
		printf("Digite o numero %d:", count);
		scanf("%d", &num);
		
		count=count+1;
		
		if(num>maior){
		maior=num;
		}
		}
		
		printf("Maior: %d\n", maior);
		system("pause");
		return 0;
}
