#include<iostream>
using namespace std;


int main() {

	int n, m, k;
	cin >> n >> m >> k;

	int a[n + 1] {};//Because we want to store values according to 1 based indexing.

	for (int i = 1; i <= n; i++) {
		//We are going from 1 to n th index because of 1 based index storing concept.
		cin >> a[i];
	}

	//Again 1 based indexing as given in question.
	int l[m + 1] {}, r[m + 1] {}, d[m + 1] {};

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	/*
		l[]{0,1,1,2};
		r[]{0,2,3,3};
		d[]{0,1,2,4}

		op2 =  l[2] se r[2] tak d[2] ko add karo.

		Computations : n*m*k : 10^15

	*/

	for (int i = 1; i <= k; i++) {

		int x, y;
		cin >> x >> y;

		/*
			For my current values of x and y , perform all the
			operations from Operation(x) to Operation(y).
		*/

		//Range 1: For Operations.
		for (int op = x; op <= y; op++) {
			/*
				For My current Operation add d[op] to all the values
				of array from l[op] to r[op].
			*/

			//Range 2 : For Values.
			for (int p = l[op]; p <= r[op]; p++) {
				a[i] += d[op];
			}

		}

	}


	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}

}