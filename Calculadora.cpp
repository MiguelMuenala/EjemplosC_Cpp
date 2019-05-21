#include <stdio.h>



void Suma(int a, int b)
{
	int c;
	extern int variableexterna; // mediante extern digo que esta variable global esta definida en otro archovo
	variableexterna = 5;
	c = a + b;
	printf("La suma es: %d + %d = %d ",a ,b ,c );
	
}
