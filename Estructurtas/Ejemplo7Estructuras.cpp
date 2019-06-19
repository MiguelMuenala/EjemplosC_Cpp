#include<cstdlib> 
#include<iostream> 
#include<string.h> 

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
    Cliente cliente3; 
    Cliente listado[100]; 
    cliente3=cliente2=cliente1; 

    cout << "Los valores del cliente0 son: "<< cliente0.nombre<<", "<<cliente0.nomUnidades<<", "<<cliente0.precio<<", "<<cliente0.estado <<endl; 
    cout << "Los valores del cliente1 son: "<< cliente1.nombre<<", "<<cliente1.nomUnidades<<", "<<cliente1.precio<<", "<<cliente1.estado <<endl; 
    cout << "Los valores del cliente2 son: "<< cliente2.nombre<<", "<<cliente2.nomUnidades<<", "<<cliente2.precio<<", "<<cliente2.estado <<endl; 

    int unidades= cliente1.nomUnidades; 

    strcpy(cliente3.nombre,"Abigail Pachacama"); 
    cliente3.nomUnidades= 20; 
    cliente3.precio= 10; 
    cliente3.estado= 'Z'; 
    cout << "Los valores del cliente3 son: "<< cliente3.nombre<<", "<<cliente3.nomUnidades<<", "<<cliente3.precio<<", "<<cliente3.estado <<endl; 

    Cliente *cliente4; 
    cliente4 = (Cliente*)malloc(sizeof(Cliente)); 
    strcpy(cliente4->nombre,"El Ayuwoki"); 
    cliente4->nomUnidades= 11; 
    cliente4->precio= 23.4; 
    cliente4->estado='G'; 
    cout << "Los valores del cliente4 son: "<< cliente4->nombre<<", "<<cliente4->nomUnidades<<", "<<cliente4->precio<<", "<<cliente4->estado <<endl; 

    free(cliente4); 

    Cliente *cliente5= new Cliente; 
    strcpy(cliente5->nombre,"GG WP"); 
    cliente5->nomUnidades= 30; 
    cliente5->precio= 50.4; 
    cliente5->estado='g'; 

    cout << "Los valores del cliente5 son: "<< cliente5->nombre<<", "<<cliente5->nomUnidades<<", "<<cliente5->precio<<", "<<cliente5->estado <<endl; 
    free(cliente5); 
    
    Cliente cliente6;
    cout << "Cliente: ";
    cin.getline(cliente6.nombre,20);
    cout << "Unidad: ";
    cin >> cliente6.nomUnidades;
    cout << "Precio: ";
    cin >> cliente6.precio;
    cout << "Estado(M=Moroso,A=Atrasado, P=Pagado): ";
    cin >> cliente6.estado;
    cout << "\nLos valores del cliente6 son: "<< cliente6.nombre<<", "<<cliente6.nomUnidades<<", "<<cliente6.precio<<", "<<cliente6.estado <<endl; 
    
    
    system("PAUSE"); 
    return 0; 

} 
