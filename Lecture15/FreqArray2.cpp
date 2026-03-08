#include<iostream>
#include<climits>
using namespace std;


int main() {


	int n;
	cin >> n;

	int a[n];
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	/*
		Issues : You can create array of size 10^7 hence if
		the original array whose frequency you want to calculate
		has a element greater than 10^7 is now becomes impossible to store
		that element's frequency as we cannot have large index
		above 10^7.

		You are unnecessarily using extra/big size array .

		Advantage : Time : ~n.
	*/

	//Building the frequency array
	int freq[maxi - mini + 1] {};
	for (int i = 0; i < n; i++) {
		int ce = a[i];//Current Element can be -ve and we cannot directly store it.
		// freq[ce]++; This is wrong.

		int se = ce - mini;
		freq[se]++;//se is always +ve.
	}


	//Printing the Freq array:
	for (int i = 0; i < maxi - mini + 1; i++) {

		if (freq[i] > 0) {
			int se = i;
			int oe = i + mini;
			int frequencyOfElement = freq[i];
			cout << oe << " ---> " << frequencyOfElement << endl;
		}
	}


}