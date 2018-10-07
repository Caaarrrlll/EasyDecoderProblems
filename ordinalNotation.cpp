#include <iostream>

using namespace std;

int main(){
	int inNo;
	cin >> inNo;

	switch(inNo){
		case 1:{
			cout << inNo << "st\n";
			break;
		}
		case 2:{
			cout << inNo << "nd\n";
			break;
		}
		case 3:{
			cout << inNo << "rd\n";
			break;
		}
		default:{
			cout << inNo << "th\n";
			break;
		}
	}

	return 0;
}