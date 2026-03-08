#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Prefix Product :
	int pre2[n + 1] {};
	pre2[0] = 1;
	for (int i = 1; i < n; i++) {
		pre2[i] = pre2[i - 1] * a[i - 1];
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << pre2[i] << " ";
	// }

	// cout << endl;

	//Suffix Product :
	int suffix2[n + 1] {};
	suffix2[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--) {
		suffix2[i] = suffix2[i + 1] * a[i + 1];
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << suffix2[i] << " ";
	// }

	// cout << endl;

	for (int i = 0; i < n; i++) {
		cout << pre2[i]*suffix2[i] << " ";
	}

}