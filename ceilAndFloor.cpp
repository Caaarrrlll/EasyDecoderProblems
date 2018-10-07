#include <iostream>

using namespace std;

int ceil(double inNo){
	int inn = (int)inNo;
	if(inNo == (float)inn){
		return inn;
	}
	return (int)inNo + 1;
}

int floor(double inNo){
	int inn = (int)inNo;
	if(inNo == (float)inn){
		return inn;
	}
	return (int)inNo - 1;
}

int main(){
	double inNum;
	cin >> inNum;
	cout << ceil(inNum) << " " << floor(inNum) << endl;
	
	return 0;
}