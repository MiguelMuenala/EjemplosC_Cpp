#include<cstdlib> 
#include<iostream> 
#include<string.h> 
#include<math.h> 

using namespace std; 


struct Cliente{ 
    double codigo;
    char nombre[30]; 
    double saldo; 
}; 

void ProcCliente(Cliente cliente[]){
	char limpiarBuffer[4];
	for(int i=0; i<4 ;i++){
		cout <<"Ingrese el codigo del ciente: ";
		cin>> cliente[i].codigo;
		cin.getline(limpiarBuffer,1);
		cout <<"Ingrese el nombre del ciente " << i <<": ";
		cin.getline(cliente[i].nombre,30);
		cin.getline(limpiarBuffer,1);
		cout <<"Ingrese el saldo del ciente: ";
		cin>> cliente[i].saldo;	
		cin.getline(limpiarBuffer,1);
	}
}

void Opera(Cliente cliente3[]){
	for(int i=0 ; i<4 ; i++){
		if(cliente3[i].saldo <10.00){
			cliente3[i].saldo-= 1;
		}
		if(cliente3[i].saldo>=10.00 && cliente3[i].saldo<100){
			cliente3[i].saldo*=2;
		}
		if(cliente3[i].saldo>100){
			cliente3[i].saldo= pow(cliente3[i].saldo,3);
		}
	}
}


void ProcCliente(Cliente cliente[]);
void Opera(Cliente cliente[]);

int main(){ 
	Cliente cliente1[4];
	Cliente cliente3[4];
	ProcCliente(cliente1);
	Opera(cliente3);
	cout <<"Los datos del cliente son: "<<endl;
	for(int i=0; i<4 ;i++){
		cout << "Codigo: "<< cliente1[i].codigo<<", nombre="<<cliente1[i].nombre<<", codigo="<<cliente3[i].saldo<<endl; 
	}
    system("PAUSE"); 
    return 0; 
} 


