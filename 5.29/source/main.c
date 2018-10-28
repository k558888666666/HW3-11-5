#include <stdio.h>
#include <stdlib.h>

int LCM(int a, int b)
{
	int C;
	for (int i = a; i <= a * b; i++)
	{
		if (i%a == 0 && i%b == 0)
		{
			
			C = i;
			

			
			break;
		}
	}
	return C;
}

int main(void)
{
	int a, b, i, j,c,d;
	printf("Enter an integer\n");
	scanf_s("%d", &a);
	printf("Enter the other integer\n");
	scanf_s("%d", &b);

	printf("Least common multiple between %d and %d is %d\n", a, b, LCM(a,b));
	//printf("Least common multiple between %d and %d is %d\n", a, b, c);
	system("pause");
	return 0;
}