#include <iostream>

using namespace std;
int Fibonacci( int n);
int main()
{
	int numero, resultado;
	
	cout << "Calculo del numero fibonacci de un numero ";
	cout << "\nIngrese un número ";
	cin >> numero;
	resultado = Fibonacci(numero);
	cout << "El fibonacci de " << numero << " es " << resultado;
	
	cout << "El fibonacci de" << numero << " su serie es: ";
	for(int i =0; i<numero; i++)
	 cout << Fibonacci(i) << " ";
	 cout << end;}
	cout << "El fibonacci de" << numero << " su serie es: ";
	return 0;
}


int Fibonacci( int n)
{
	if(n==0)
	 return 0;
	if(n==1)
	 return 1;
	return Fibonacci(n - 2) + Fibonacci(n - 1);
}

int Fibonacci1( int n)
{
	if(n<2)
	 return 0;
	if(n==1)
	 else
	return Fibonacci(n - 2) + Fibonacci(n - 1);
}
