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

Cliente ProcCliente(Cliente cliente){
	cout <<"Ingrese el nombre del cliente: ";
	cin.getline(cliente.nombre,30);
	cout <<"Ingrese el numero de unidades: ";
	cin>> cliente.unidades;
	cout <<"Ingrese el precio de una unidad: ";
	cin>> cliente.precio;
	cout <<"Ingrese el estado(M= Moroso, A= Atrasado, P=Pagado): ";
	cin>> cliente.estado;
	return cliente;
}

int main(){ 
	Cliente cliente1;
	Cliente respuestaCliente=ProcCliente(cliente);
	cout <<"Los datos del cliente son: "<<endl;
	cout << "Cliente: "<< respuestaCliente.nombre<<", unidad="<<respuestaCliente.unidades<<", precio="<<respuestaCliente.precio<<", estado="<<respuestaCliente.estado <<endl; 
    
    system("PAUSE"); 
    return 0; 

} 
