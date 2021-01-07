#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int num,
	count=1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(count <=10)
	{
		printf("%d * %d = %d\n", num, count, num*count);
		count++;
	}
	system("pause");
}
