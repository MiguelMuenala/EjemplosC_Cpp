/*Ricardo Barros
Prueba Ejercicio 2
*/
#include<iostream>

using namespace std;

	const int fila=3;
	const int colum=3;
void llenarMatriz(int matriz[][colum], int colum, int fila);
void mostrarMatriz(int matriz[][colum], int matrizT[][fila] , int fila, int colum);
void llenarSuma(int matriz[][colum], int matriz2[][colum], int matriz3[][colum], int fila , int colum);

void llenarMatriz(int matriz[][colum], int colum, int fila){
	for(int i=0; i<fila; i++){
		for(int j=0; j<colum; j++){
			cout<<"Ingrese elemento [ "<<i<<","<<j<<" ]= ";
			cin>>matriz[i][j];
		}
	}
}

void llenarSuma(int matriz[][colum], int matriz2[][colum], int matriz3[][colum], int fila , int colum){
	int aux=0;
	for(int i=0; i<fila; i++){
		for(int j=0; j<colum; j++)
		{
		cout<<" "<<matriz[i][j]<<" + "<<matriz2[i][j]<<'\t';
		aux=matriz[i][j]+matriz2[i][j];
		matriz3[i][j]=aux;
		aux=0;
		}cout<<endl;
	}
}

void mostrarMatriz(int matriz[][colum], int matrizT[][fila], int fila, int colum){
	cout<<"Matriz suma:"<<endl;
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<colum; j++){
			cout<<matriz[i][j]<<'\t';
			matrizT[j][i]=matriz[i][j];
		}cout<<endl;
	}
	cout<<endl;
	cout<<"Matriz transpuesta:"<<endl;
	for(int i=0; i<fila; i++){
		for(int j=0; j<colum; j++){
			cout<<matrizT[i][j]<<'\t';
		}cout<<endl;
	}
}
int main(){
	int matrizA[fila][colum];
	int matrizB[fila][colum];
	int matrizS[fila][colum];
	int matrizT[colum][fila];
	
	cout<<"Matriz A"<<endl;
	llenarMatriz(matrizA, colum, fila);
	
	cout<<endl<<"Matriz B"<<endl;
	llenarMatriz(matrizB, colum, fila);
	cout<<endl<<"***********************************"<<endl;
	llenarSuma(matrizA, matrizB, matrizS, fila, colum);
	cout<<"************************"<<endl;
	mostrarMatriz(matrizS, matrizT, fila, colum);

	
}
