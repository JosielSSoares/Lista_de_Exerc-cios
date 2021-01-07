#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int num; 
	int count=1;
	printf("Digite um numero:");
	scanf("%d", &num);
	printf("Impares \tpares\n");
	while(count<=num)
	{
		if(count%2==1)
		printf("%d\t", count);
		else
		printf("\t%d\n", count);
		count++;
	}
	system("pause");
	return 0;
	
}
