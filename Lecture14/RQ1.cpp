#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int k;//Number of Queries.
	cin >> k;

	for (int i = 0; i < k; i++) {
		//For every query take two values as input and sum[l,r].
		int l, r;
		cin >> l >> r;

		int sum = 0;
		for (int j = l; j <= r; j++) {
			sum += a[j];
		}
		cout << sum << endl;
	}

}