#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int i;
	
	for(i=1000; i<=2000;i++)
	{
		if(i%11==5)
		{
			printf("%i\n", i);
		
		}
	}
	system("pause");
	return 0;
}
