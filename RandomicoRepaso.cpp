/*Realizar un programa que se recorra del 1 al 100. 
Adicional generar un numero aleatorio en el 40 y 60 
y cuando encuentre el numero se detenga e imprima el numero*/

#include<iostream>

using namespace std;


int main(){
	
	for(int i=10 ; i>=1 ; i--){
		
		for(int j=1 ; j<=10 ; j++){
			
			if(i<j){
				cout << " " ;
			}else{
				cout << "*" ;
			}
		}
		cout << endl ;
	}
	return 0;
}


