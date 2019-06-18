#include<iostream>

int fac;
int n=10;
int r=4;
int m= 6;
int c;
using namespace std;
int factorial1(int n);
int factorial3(int m);
int factorial2(int r);
int Com(int c);

int main(){
	
	cout<<"Numero de comites formados de 4 personas"<<endl;
	cout << "Los comites que pueden ser formados son: "<< Com(c) << endl; 

	return 0;
}

int factorial1(int n){
	if(n==0){
		n=1;
	}else{
		n=n*factorial1(n-1);
	}
	
	return n;
}
int factorial3(int m){
	if(m==0){
		m=1;
	}else{
		m=m*factorial3(m-1);
	}
	
	return m;
}
int factorial2(int r){
	if(r==0){
		r=1;
	}else{
		r=r*factorial2(r-1);
	}
	
	return r;
}


int Com(int c){
	
	c=(factorial1( n))/((factorial3( m))*(factorial2(r)));
	
	return c;
}
