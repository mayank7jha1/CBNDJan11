#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Computations  : 17 : (3*n+2) : ~n.

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Yo";
		}
	}

	cout << sum << endl;


}