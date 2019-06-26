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
	//delete[] cliente; no debería porque se borra solo
}
void MostrarDatoCliente(Cliente cliente[]){
	//Cliente *cliente= new Cliente[100];
	cout <<"Los datos del cliente son: "<<endl;
	for(int i=0; i<3 ;i++){
		cout << "Cliente: "<< cliente[i].nombre<<", unidad="<<cliente[i].unidades<<", precio="<<cliente[i].precio<<", estado="<<cliente[i].estado <<endl; 
	}
}

int main(){ 
	//Cliente cliente1[100];
	Cliente *cliente= new Cliente[100];
	MostrarDatoCliente(cliente);
	ProcCliente(cliente);
	delete[] cliente;
    system("PAUSE"); 
    return 0; 

} 
