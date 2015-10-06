#include <iostream>

using namespace std;

int main(){
	float number, total=0.0;
	cout << "Input numbers to be added: " << endl;
	cin >> number;

	while(number >= 0.0){
		total = total + number;
		cin >> number;
	}

	cout << total << endl;
	return 0;
}
