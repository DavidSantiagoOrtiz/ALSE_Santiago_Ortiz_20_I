#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float max(float m, float n){
	return m > n ? m:n;
}

float min(float m, float n){
	return m < n ? m:n;
}

int main(int argc, char** argv){

	float a,b,k,j;
	a,b,k,j=0;

	cout << "Digite un número flotante A:"<<endl;
	cin  >> a;

	cout << "Digite un número flotante B:"<<endl;
	cin  >> b;

	j = max(a,b);
	k = min(a,b);
	
	cout << "El número menor es:"<< k <<endl;
	cout << "El número mayor es:"<< j <<endl;

	j = j*pow(10,k);

	cout << "El resultado de A*10^B es:"<< j <<endl;

	return 0;

}


