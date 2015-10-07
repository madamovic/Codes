#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double e = exp(1.);
	double pi = M_PI;
	
	cout << "e to the power of pi is: " << pow(e,pi) << endl;
	cout << "pi to the power of e is: " << pow(pi,e) << endl;
}

