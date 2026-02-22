#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;

	int c = 2;
	while (c <= n - 1) {

		if ((n % c) == 0) {
			//cout << "Not Prime" << endl;
			break;
		}


		c += 1;
	}

	if (c == n) {
		cout << "Prime" << endl;
	} else {
		cout << "Not Prime" << endl;
	}





}