#include<iostream>
using namespace std;


int main() {

	int n, m, k;
	cin >> n >> m >> k;

	int a[n + 1] {};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int l[m + 1] {}, r[m + 1] {}, d[m + 1] {};

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	int oc[m + 1] {}; //oc[i] : ith Operation kitni bar karna hain.

	for (int i = 1; i <= k; i++) {
		int x, y;
		cin >> x >> y;
		oc[x]++;
		oc[y + 1]--;
	}

	//Take Prefix of your operation count array.
	for (int i = 1; i <= m; i++) {
		oc[i] = oc[i - 1] + oc[i];
	}

	for (int i = 1; i <= m; i++) {
		cout << oc[i] << " ";
	}
	cout << endl;

	//(2k+m+m*n) : (k+m+m*n)

	int difference[n + 1] {};

	// for (int i = 1; i <= m; i++) {

	// 	//Brute Force :
	// 	for (int j = l[i]; j <= r[i]; j++) {
	// 		difference[j] += (oc[i] * d[i]);
	// 	}
	// }

	// cout << endl;

	for (int i = 1; i <= m; i++) {
		int x = l[i];
		int y = r[i];

		//Range Resolving:
		difference[x] += (oc[i] * d[i]);
		difference[y + 1] -= (oc[i] * d[i]);
	}

	for (int i = 1; i <= n; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}


	for (int i = 1; i <= n; i++) {
		cout << difference[i] << " ";
	}

	cout << endl;

	for (int i = 1; i <= n; i++) {
		a[i] = a[i] + difference[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}


}