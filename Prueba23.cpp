#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int c=0;
	int f=0;
	cout << "Celsius" << "\t"<< "Fahrenheit" <<endl; 

    for(int c=0 ; c<=100 ; c++){
    	
    	f= (32+ ((9*(c))/5));

        cout << setprecision(5) << c << "\t"<< f <<endl; 
        c = c + 9;
    } 

	return 0;
}
