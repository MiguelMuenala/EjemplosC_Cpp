#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int areglo[3][3]={{1,2,3},{4,5,6}};
	int sumf1=0;
	int cuentaf1=0;
	int cuentac2=0; 
	
	for(int i =0; i<3 ; i++){
		
		for(int j =0; j<3 ; j++){
			//matriz[i][j]=0;
			cout << areglo[i][j]<< "\t";
		}
		cout << endl;
	}
	
	cout << "\nfila 1 ="<< areglo[0][0]+areglo[0][1]+areglo[0][2] <<endl;
	cout << "fila 2 ="<< areglo[1][0]+areglo[1][1]+areglo[1][2] <<endl;
	cout << "fila 2 ="<< areglo[2][0]+areglo[2][2]+areglo[2][3] <<endl;
	
	cout << "Suma de todas las filas: "<< areglo[0][0]+areglo[0][1]+areglo[0][2]+areglo[1][0]+areglo[1][1]+areglo[1][2]+areglo[2][0]+areglo[2][2]+areglo[2][3] <<endl;
	
	cout << "\nfila 1 "<<endl;
	
	for(int i =0; i<3 ; i++){
		cout << areglo[1][i]<< "\t";
		cuentaf1+=areglo[1][i];
	}
	cout << "\nSuma de fila 1 ="<< cuentaf1  <<endl;
	
	
	cout << "\nSuma Columna 1 ="<< areglo[0][0]+areglo[1][0]+areglo[2][0] <<endl;
	cout << "Suma Columna 2 ="<< areglo[0][1]+areglo[1][1]+areglo[2][1] <<endl;
	cout << "Suma Columna 2 ="<< areglo[0][2]+areglo[1][2]+areglo[2][2] <<endl;
	
	cout << "Suma de todas las columnas: "<< areglo[0][0]+areglo[1][0]+areglo[2][0]+areglo[0][1]+areglo[1][1]+areglo[2][1]+areglo[0][2]+areglo[1][2]+areglo[2][2]<<endl;
	
	cout << "\nColumna 2 :\n" <<endl;
	for(int i =0; i<3 ; i++){
		cout << areglo[i][2]<< "\t";
		cuentac2+=areglo[i][2];
	}
	
	cout << "\nSuma de columna 2 ="<< cuentac2  <<endl;
	
	return 0;
}
