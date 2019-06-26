#include<iostream>
#include <stdio.h> 

using namespace std;

int main(){
	int m=4;
	int ma= 0;
	int mi= 0;
	int es= 0;
	
	string frace="Cadema Limpia";
	for(int i=0 ;i<m;i++){
		if(frace[i] >='A' && frace[i] <= 'Z' ){
			i=1 + ma;
			ma=i;
		}
		if(frace[i]>='a'&& frace[i] <='z' ){
			i=1+mi;
			mi=i;
		}
		if(frace[i]= ' '){
			i=1+es;
			es=i;
		}
	}
	cout<<"Numero de letras mayusculas son: "<< ma<<endl;
	cout<<"Numero de letras nimusculas son: "<< mi<<endl;
	cout<<"Numero de espacios son: "<<es<<endl;
    return 0;
} 


