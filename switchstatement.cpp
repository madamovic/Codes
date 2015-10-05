#include <iostream>

using namespace std;

int main(){
	int age = 21;
	switch(age){
		case 16:
			cout << "You get one present!" << endl;
			break;
		case 18:
			cout << "You get two presents!" << endl;
			break;
		case 21:
			cout << "You get five presents!" << endl;
			break;
		default:
			cout << "You get nothing!!" << endl;
	}
}
