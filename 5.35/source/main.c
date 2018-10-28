#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	unsigned long long int x, y,a;

	x = 0;
	y = 1;
	printf("%d  1  ", x);
	for (int i = 0; i < 40; i++)
	{
		a = x + y;
		x = y;
		y = a;
		printf("%d  ", a);
	}
	

	
	




	system("pause");
	return 0;
}