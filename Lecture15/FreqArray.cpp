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

	//Building the frequency array
	int freq[maxi + 1] {};
	for (int i = 0; i < n; i++) {
		int ce = a[i];//Current Element
		freq[ce]++;
	}


	//Printing the Freq array:
	for (int i = 0; i < maxi + 1; i++) {
		if (freq[i] > 0) {
			int element = i;
			int frequencyOfElement = freq[i];
			cout << element << " ---> " << frequencyOfElement << endl;
		}
	}


}