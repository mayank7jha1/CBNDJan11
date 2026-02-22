#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;

	//int n;//Redefinition in the same scope.

	if (n > 50) {
		int n = 89;
		cout << "Hello" << endl;
		cout << n << endl;
	} else {
		int n = 100;
		cout << "Not hello" << endl;
	}

	cout << n << endl;

}