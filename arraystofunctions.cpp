#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeofarray);

int main(){
	int first[3] = {2,3,44};
	int second[5] = {23,43,567,555,3214};
	
	printArray(first,3);
	printArray(second,5);
	
}

void printArray(int theArray[],int sizeofarray){
	for (int x = 0; x < sizeofarray; x++){
		cout << theArray[x] << endl;
	}
}
