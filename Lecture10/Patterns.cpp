#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int n1 = n / 2 + 1;
	int n2 = n - n1;
	// cout << n1 << " " << n2 << endl;

	int r = 1;

	while (r <= n1) {

		int c = 1;
		while (r >= c) {
			cout << "*";
			c += 1;
		}

		cout << endl;

		r += 1;
	}

	r = 1;

	while (r <= n2) {
		// c = 1;
		int c = 1;
		while (r + c <= n2 + 1) {
			cout << "*";
			c += 1;
		}

		cout << endl;

		r += 1;
	}

}