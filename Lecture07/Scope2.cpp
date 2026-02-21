#include<iostream>
using namespace std;


int main() {

	int x{90};

	if (x > 10) {
		int x{103};//This is allowed as it is in different scope.
		x += 10;

		cout << x << endl;
	}

	x += 10;
	cout << x << endl;

}