//Ejemplo de validacion cedula con arreglos bidimencionales (matriz o tabla)

#include<iostream>

using namespace std;

int main(){
	
	//string cedula = "1726062720";
	string cedula = "1755397922";
	//int matriz[3][9]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
	int matriz[3][9]={0};
	int filas=3,columnas=9;
	int sumatotal;
	
	cout << "Cedula es: "<<cedula <<endl;
	
	for(int j=0; j<columnas ; j++){
		if(j%2==0){
			matriz[0][j]=2;
		}else{
			matriz[0][j]=1;
		}
		matriz[1][j]= cedula[j]-'0';
		
		matriz[2][j] =(matriz[0][j]*matriz[1][j]>=10? matriz[0][j]*matriz[1][j]-9 :matriz[0][j]*matriz[1][j]);
		
		sumatotal+= matriz[2][j];
	}
	
	for(int i =0; i<3 ; i++){
		
		for(int j =0; j<9 ; j++){
			//matriz[i][j]=0;
			cout << matriz[i][j]<< "\t";
		}
		cout << endl;
	}
	
	cout<<"Suma total es: "<< sumatotal << endl;
	
	int digitoverificador =10-sumatotal%10;
	if(digitoverificador==10){
		digitoverificador =0;
	}
	cout<<"El digito verificador es: "<< digitoverificador << endl;
	
	if(digitoverificador== (int)cedula[9]-48){
		
		cout<<"Cedula valida"<<endl;
	}else{
		cout<<"Cedula INVALIDA ||"<<endl;
	}
	
	return 0;
}
