#include <stdio.h>
//#include <stdlib.h>

int main()
{
	int a, b,s;
	a = 0;
	b = 1;
	int n = 0;
	for (n; n < 45; n++)
	{
		s = a;
		a = a + b;
		b = s;
		printf("%f\n", ((float)a/(float)b));
		
	}
	//system("pause");
}