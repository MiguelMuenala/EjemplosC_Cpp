#include <iostream>

using namespace std;

int FactorialIterativo(int n);
int FactorialRecursivo(int n);
int main()
{
	int n;
	int fact;
	cout <<"Factorial de un número n, entre 2 y 10.\n"<<endl;
	do
	{
		cout <<"Ingrese un valor: "<< endl;
		cin >> n;
	}while(n<2 || n>10);
	fact = FactorialIterativo(n);
	cout<< "De forma Iterativa " << n << "! es : " <<fact <<endl;
	fact = FactorialRecursivo(n);
	cout<< "\nDe forma Recursiva " << n << "! es : " <<fact <<endl;
	return 0;
}
//Funcion que calcula el factorial de forma iterativa.
int FactorialIterativo(int n)
{
	int fact, m;
	for(m=n, fact =1; n>1;)
	{
		fact= fact *n;
		n = n - 1; //n--;
		
	}
	return fact;
}


int FactorialRecursivo(int n)
{
	if (n<=1)
	return 1;
	return n*FactorialRecursivo(n-1);
}

//Operador ternario.
int factorial(int n)
{
	   ?   :  ;
	   return ;
}

