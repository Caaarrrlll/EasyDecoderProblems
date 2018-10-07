#include <iostream>

using namespace std;

int main(){
	int d,x,y;
	cin >> d >> x >> y;
	if(x == y){
		cout << "Draw" <<endl;
	}
	else if (x < y){
		cout << "Ryan" <<endl;
	}
	else{
		cout << "Alex" <<endl;
	}
}