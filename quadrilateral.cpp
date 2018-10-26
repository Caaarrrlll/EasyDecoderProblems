#include <iostream>

using namespace std;

int main(){
	int noCases, inNo, total;

	cin >> noCases;

	for(int i = 0; i < noCases; i++){
		total = 0;

		cin >> inNo;
		total += inNo;
		cin >> inNo;
		total += inNo;
		cin >> inNo;
		total += inNo;
		cin >> inNo;
		total += inNo;

		if(total != 360)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}