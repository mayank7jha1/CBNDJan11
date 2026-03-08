
#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	//Precomputation : Prefix Sum :
	int pre[n + 1] {};
	//Above array will have indexing from 0 to n but I will only perform
	//task from 0 to n-1.

	pre[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}

	cout << endl;

	int k;
	cin >> k;

	//Range : Usko aapne Resolve Kardiya.
	for (int i = 0; i < k; i++) {
		int l, r;
		cin >> l >> r;

		if (l == 0) {
			cout << pre[r] << endl;
		} else {
			cout << (pre[r] - pre[l - 1]) << endl;
		}
	}



}