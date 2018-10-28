#include <stdio.h>
#include <stdlib.h>

int power(int x, int y)
{
	/*int a= 1;
	for (int i = 1; i <= y; i++)
	{
		a = a * x;
		
	}
	
	return a;*/
	if (y<0)
	{
		return 0;
	}
	if (y == 0)
	{
		return 1;
	}
	else
	{
		return x * power(x,y - 1);
	}

}

int main(void)
{
	int x, y;
	scanf_s("%d %d", &x, &y);

	printf("%d", power(x, y));
	system("pause");
	return 0;
}