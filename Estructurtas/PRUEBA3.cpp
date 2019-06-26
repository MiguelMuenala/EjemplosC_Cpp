#include<iostream>
#include <stdio.h> 

using namespace std;
double MaximoValor(double matriz);

double MaximoValor(double matriz[3][3]){
	double maximovalor =2;
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			matriz[i][j];
			if(matriz[i][j]>matriz[i][j-1]){
				maximovalor=matriz[i][j];
			}
		}
	}
	return maximovalor;
}

int main(void) { 

    double matriz[3][3] = {2.9,5.6,7.98,3.7,1.5,4.2,8.2,9.8,6.45};
    cout<<"maximo= " << MaximoValor(matriz); 
    
    return 0;
} 


