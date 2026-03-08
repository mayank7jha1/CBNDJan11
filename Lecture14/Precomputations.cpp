#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Prefix Sum :
	int pre[n + 1] {};
	pre[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}

	cout << endl;

	//Prefix Product :
	int pre2[n + 1] {};
	pre2[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre2[i] = pre2[i - 1] * a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << pre2[i] << " ";
	}

	cout << endl;

	//Suffix Sum :
	int suffix[n + 1] {};
	suffix[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] + a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << suffix[i] << " ";
	}

	cout << endl;

	//Suffix Product :
	int suffix2[n + 1] {};
	suffix2[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		suffix2[i] = suffix2[i + 1] * a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << suffix2[i] << " ";
	}

	cout << endl;

}