#include <iostream>

using namespace std;

int factorial(int n);
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
	fact = factorial(n);
	cout<< "De forma Iterativa " << n << "! es : " <<fact <<endl;
	return 0;
}

int factorial(int n)
{
	  return(n<=1)?  1 : factorial(n-1) ;
}

