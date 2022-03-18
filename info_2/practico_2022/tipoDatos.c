#include <stdio.h>
#include <limits.h>

int main(void) {
	char caracter;
	unsigned char u_caracter;
	int entero;
	unsigned int u_entero;
	unsigned short int usint;

	printf("Longitud de cada tipo de datos.\n\n");
	printf("Longitud de char es %ld\n", sizeof(caracter));
	printf("Los valores maximos y minimos de un char son \t%d \t%d\n\n", CHAR_MIN, CHAR_MAX);

	printf("Longitud de unsigned char es %ld\n", sizeof(u_caracter));
	printf("El valor maximo de un unsigned char es \t%d\n\n", UCHAR_MAX);

	printf("Longitud de un int es %ld\n", sizeof(entero));
	printf("Los valores maximos y minimos de un int son \t%d \t%d\n\n", INT_MIN, INT_MAX);

	printf("Longitud de un unsigned int es %ld\n", sizeof(u_entero));
	printf("El valor maximo de un unsigned int es \t%d\n\n", UINT_MAX);

	printf("Longitud de un unsigned short int es %ld\n", sizeof(usint));
	printf("El valor maximo de un unsigned short int es \t%d\n", USHRT_MAX);

	return 0;
}

