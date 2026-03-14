#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;


	//Find the triplet whose sum is target.

	for (int i = 0; i < n - 2; i++) {
		int ce = a[i];//We are trying to find a triplet whose first element is ce. (ce,_,_)
		int nt = target - ce;

		//Find the pair whose sum is (target-ce).
		for (int j = i + 1; j < n - 1; j++) {

			int nce = a[j];//We are trying to find a pair whose first element is nce. (Current Triplet : (ce,nce,_)
			int key = nt - nce;

			//Check karo ab bache hue array me kya key present hain.
			//Kya fre[key]>0 hain.
			// if (freq[key] > 0) {

			// }

			for (int k = j + 1; k < n; k++) {
				if (key == a[k]) {
					cout << ce << " " << nce << " " << a[k] << endl;
				}
			}
		}
	}



	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {

				if (a[i] + a[j] + a[k] == target) {
					cout << a[i]  << " " << a[j] << " " << a[k] << endl;
				}
			}
		}
	}



}