#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;
	cin >> n;

	int a[n + 1] {};//Size if n+1 but given values are from 0 to n-1 i.e n.

	for (int i = 0; i <= n; i++) {
		//Here we are going to index from 0 to n because we want to
		//initialise all the values of a with INT_MAX.
		a[i] = INT_MAX;
	}

	for (int i = 0; i < n; i++) {
		//Here we are only going from 0 to n-1 because only n values
		// are being provided by the user.
		cin >> a[i];
	}

	int mini = INT_MAX;
	int maxi = INT_MIN;


	for (int i = 0; i < n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	cout << maxi << " " << mini << endl;

	int maxi2 = a[0], mini2 = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > maxi2) {
			maxi2 = a[i];
		}

		if (a[i] < mini2) {
			mini2 = a[i];
		}
	}

	cout << maxi2 << " " << mini2 << endl;


	int miniIndex = n;//Initialing with value that can never become your answer.
	//a[n]=0;
	//Now a[n]=INT_MAX;

	a[n] = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (a[i] < a[miniIndex]) {
			miniIndex = i;
		}
	}

	cout << miniIndex << endl;


	int miniElement = INT_MAX;
	int miniIndex2 = -1;

	for (int i = 0; i < n; i++) {
		if (a[i] < miniElement) {
			miniElement = a[i];
			miniIndex2 = i;
		}
	}


	int miniIndex3 = 0;//You have assumed the first element to be minimum.
	for (int i = 1; i < n; i++) {
		if (a[i] < a[miniIndex3]) {
			miniIndex3 = i;
		}
	}

	cout << miniIndex3 << endl;


}