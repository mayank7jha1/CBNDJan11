#include<iostream>
using namespace std;
const int P = 1e5 + 10;//1*10^5+1
int a[P] {}, l[P] {}, r[P] {}, d[P] {}, oc[P] {}, difference[P] {};


int main() {

	int n, m, k;
	cin >> n >> m >> k;


	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}


	//Resolving First Range of Query.
	for (int i = 1; i <= k; i++) {
		int x, y;
		cin >> x >> y;
		oc[x]++;
		oc[y + 1]--;
	}

	for (int i = 1; i <= m; i++) {
		oc[i] = oc[i - 1] + oc[i];
	}

	//Resolving Second Range of Operations.
	for (int i = 1; i <= m; i++) {
		int x = l[i];
		int y = r[i];
		difference[x] += (oc[i] * d[i]);
		difference[y + 1] -= (oc[i] * d[i]);
	}

	for (int i = 1; i <= n; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}

	//Update in Original Array.
	for (int i = 1; i <= n; i++) {
		a[i] = a[i] + difference[i];
	}


	//Printing the Original Array.
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}