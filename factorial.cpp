#include <iostream>
using namespace std;

int factorialFinder(int x){
	if (x==1){
		return 1;
	}else{
		return x*factorialFinder(x-1);
	}
}

int main(){
	int a;
	cout << "Choose a number to calculate its factorial:" << endl;
	cin >> a;
	cout << "Factorial is equal to:" << factorialFinder(a) << endl; 
}
