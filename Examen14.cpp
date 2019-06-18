#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int Rand(int n[2]);
int a;
int b;
int c;
int d;
int n[]={a,b};
int m[]={c,d};

int main(){
	
	cout <<"\tJuego de loteria"<<endl;
	cout <<"\nA.Si el numero coincide"<<endl;
	
	cout << Rand(n);
	
	cout <<"\nIngrese un numero de dos digitos"<<endl;
	cin>>m[2];
	
	Rand(n);
	
	if(m[2]>=10 && m[2]<=100){
		cout << "A gannado $1.000 dolares";
		if(m[2]==Rand(n)){
			cout << " \nA ganado $3.000" ;
			if(c==a || c==b){
				cout << "\nA gannado 100 dolares";
			}
			if(d==a || d==b){
				cout << "\nA gannado 100 dolares";
			}
		}else{
			cout <<"\nLo sentimos, no ha hacertado";
		}
		
	}else{
		cout<<"\nEl numero que ingreso no es valido"<< endl;
	}
	
	

	
	return 0;
}

int Rand(int n[2]){
	srand(time(NULL));
	n[2]= 10+ rand() % (100-10);
	
	return n[2];
}


