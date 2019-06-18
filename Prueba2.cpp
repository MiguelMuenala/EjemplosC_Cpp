#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	int k=1;
	
	for(int i=1 ; i<=5; i++){
		
		for(int j=1 ; j<=5; j++){
			
			if(i<j){
				cout << " ";
			}else{
			cout << i*j << " " ;		
			}
		}
		cout << endl;
	}
	return 0;
}
