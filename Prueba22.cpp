#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	int i=1;
	int p=0;
	
	while(i>=1 && i<=7){
		i++;
		i += p ;
		p=i;
		i++;
	}
	cout << i ;


	return 0;
}
