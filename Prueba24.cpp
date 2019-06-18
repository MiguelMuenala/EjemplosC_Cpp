#include<iostream> 

using namespace std;
 
int main() 
{ 

    double a; 
    double c; 
    double b; 

    cout <<" Lados de un triangulo"<<endl; 
    cout << "\nIngrese el valor de a: "; cin >>a; 
    cout << "\nIngrese el valor de b: "; cin >>b; 
    cout << "\nIngrese el valor de c: "; cin >>c; 

     if(( a>0 ) && ( b>0 ) && ( c>0 )){ 

        if( (a+b>c) && (c+b>a) && (a+c>b)){ 
        
        if( (a=b) || (b=c) || (b=c)){
        	
        	cout <<"Es un triangulo isoseles"<< endl;
		}
		if( (a=b) && (b=c) && (b=c)){
        	
        	cout <<"Es un triangulo equilatero"<< endl;
		}
		
        }

    }else{ 

       cout <<"Loa valores de a, b o c deben ser diferentes de cero"<< endl; 

     } 
  return 0; 
} 
