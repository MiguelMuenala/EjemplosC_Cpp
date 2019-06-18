/*
Ejercicio para analizar el paso de arreglos a funciones
*/
# include <iostream>

using namespace std;
void mostrarCentenas(int arreglo[], int tam);
void mostrarDecenas(int arreglo[], int tam);
int duplicarNumero(int );
void calcularTriple(int numeros);

int main(){
	int tamCentenas= 3;//tamaño: para n elementos,  esto parar no estar editando el codigo
	int num1=4;
	int numeros[]={1,2,3,4,5,6,7,8,9};//antes de compilar, decir el tamanio.arreglo unidimensional o vector.
	int centenas[]={3, 7, 8};
	
/*
	Lea el codigo y sin compilarlo indique:
	Cuales ser?n las salidas en pantalla:8
	*/
	
	cout<<"Antes de llamar a la funcion "<<num1<<endl;
	duplicarNumero(num1);
	cout<<"Despues de llamar a la funcion "<<num1<<endl;//posiciones conocer para sumarlos.
	cout<<"mostrar numeros en una linea";

	/*cree un bucle para mostrar cada elemento del arreglo
	numeros en una linea */
	for(int i=0; i<9; i++){
	cout<<numeros[i]<<endl;
	
}
	//cout<<"\n\nMostrar elementos antes de llamar a la funcion"<<endl;
cout<<"Mostrar triple: "<<endl;
     calcularTriple(numeros[0]);
	
	//lamar a la funcion mostrarDecenas
	
	
	
	//cout<<"\n\nMostrar elementos despues de llamar a la funcion "<<endl;
	/*cree un bucle para mostrar cada elemento del arreglo
	numeros en una linea */
	//cout<<"Mostrar Centenas: "<<endl;
	
		
		//cout<<mostrarCentenas(centenas, 3);
	
	
	
	return 0;


	
	
}

/* crear el procedimiento mostrar decenas, 
dentro del mismo tomar cada elemento del arreglo,
multiplicarlo por 10 y mostrar ese valor */
void mostrarDecenas(int arreglo[], int tam){//arreglo es una referencia
	//*10 cada elemento y lo muestro
	int aux;
	for(int j=0; j<9; j++){
	aux=arreglo[j]*10;
	cout<<aux<<endl;
}
}
void mostrarCentenas(int arreglo[], int tam){//arreglo es una referencia
	//*10 cada elemento y lo muestro
	int aux;
	for(int j=0; j<tam; j++){
	arreglo[j]=arreglo[j]*100;//c++ asume que es por referencia
	cout<<arreglo[j]<<endl;
}
}
void calcularTriple(int num){
	int aux;
	aux=numeros[0]*3;
	cout<<aux;
}
// recibe une elemento del arreglo y muestra el triple del valor.




