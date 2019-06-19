#include<cstdlib> 
#include<iostream> 
#include<string.h> 

using namespace std; 


struct Cliente{ 
    char nombre[30]; 
    int unidades; 
    double precio; 
    char estado; 
}; 

void ProcCliente(Cliente cliente[]){
	char limpiarBuffer[4];
	for(int i=0; i<3 ;i++){
		cout <<"Ingrese el nombre del cliente " << i <<": ";
		cin.getline(cliente[i].nombre,30);
		cout <<"Ingrese el numero de unidades: ";
		cin>> cliente[i].unidades;
		cout <<"Ingrese el precio de una unidad: ";
		cin>> cliente[i].precio;
		cout <<"Ingrese el estado(M= Moroso, A= Atrasado, P=Pagado): ";
		cin>> cliente[i].estado;	
		cin.getline(limpiarBuffer,4);
	}
}

int main(){ 
	Cliente cliente1[100];
	ProcCliente(cliente1);
	cout <<"Los datos del cliente son: "<<endl;
	for(int i=0; i<3 ;i++){
		cout << "Cliente: "<< cliente1[i].nombre<<", unidad="<<cliente1[i].unidades<<", precio="<<cliente1[i].precio<<", estado="<<cliente1[i].estado <<endl; 
	}
	
    system("PAUSE"); 
    return 0; 

} 
