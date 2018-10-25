#include <iostream>

using namespace std;

int main(){
	int noCases, inNo;

	cin >> noCases;

	for(int i = 0; i < noCases; i++){
		cin >> inNo;

		if(inNo % 2 == 0)
			cout << "No\n";
		else
			cout << "Yes\n";
	}

	return 0;
}