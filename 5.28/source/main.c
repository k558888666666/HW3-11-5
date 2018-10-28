#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	/*char a = 'A';
	a = a + 32;
	printf("%c", a);
	*/
	//****ASCII is decimal****
	char a ;
	printf("Enter alphabet\n");	
	scanf_s("%c",&a);
	if ( a <= 'Z')
	{
		a = a + ('a' - 'A');
	}
	else if (a >= 'a')
	{
		a = a - ('a' - 'A');
	}
	printf("%c\n", a);
	system("pause");
	return 0;
}