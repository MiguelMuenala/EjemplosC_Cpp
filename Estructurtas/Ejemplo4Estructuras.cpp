#include<cstdlib>
#include<iostream>

using namespace std;

struct Cliente{
	char nombre[20];
	int nomUnidades;
	float precio;
	char estado;
}cliente0={"Miguel Muenala",23,25.5,'M'};

int main(){
	struct Cliente cliente1={"Jairo Muenala",28,26.5,'J'}; 
	Cliente cliente2={"Angelica Muenala",32,27.5,'A'};
	Cliente cliente3, cliente4;
	Cliente listado[100];
	cliente4=cliente3=cliente2=cliente1;
	
	cout <<"sizeof(char)= " << sizeof(char) <<endl;
	cout <<"sizeof(int)= " << sizeof(int) <<endl;
	cout <<"sizeof(float)= " << sizeof(float) <<endl;
	cout <<"sizeof(Cliente)= " << sizeof(Cliente) <<endl;
	
	system("PAUSE");
	return 0;
}
