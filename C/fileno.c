#include <stdio.h>

int main()
{
	FILE *my_file=fopen("C:\\Users\\P\\Music\\Songs\\1.mp3","r");
	int descriptor = fileno(my_file);
	return 0;
}