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
		if (mini > a[i]) {
			mini = a[i];
		}

		if (maxi < a[i]) {
			maxi = a[i];
		}
	}

//	cout << mini << " " << maxi << endl;

	int target;
	cin >> target;

	int freq[maxi - mini + 1] {};
	for (int i = 0; i < n; i++) {
		int ce = a[i];
		int ss = ce - mini;
		freq[ss]++;
	}

	//Find the triplet whose sum is target.

	for (int i = 0; i < n - 2; i++) {

		int ce = a[i];//We are trying to find a triplet whose first element is ce. (ce,_,_)
		int nt = target - ce;
		freq[ce - mini]--;

		//Find the pair whose sum is (target-ce).
		for (int j = i + 1; j < n - 1; j++) {

			int nce = a[j];//We are trying to find a pair whose first element is nce. (Current Triplet : (ce,nce,_)
			int key = nt - nce;
			int ss = key - mini;
			freq[nce - mini]--;

			if (ss < maxi - mini + 1 and ss >= 0 and freq[ss] > 0) {
				cout << ce << " " << nce << " " << key << endl;
			}


			freq[ce]++, freq[nce]++;
		}
	}


}