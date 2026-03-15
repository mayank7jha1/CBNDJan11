#include<iostream>
using namespace std;


int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		int freq[10] {};//This is to store the freq. of the digits of n numbers.

		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			x %= 10;
			if (freq[x] < 3) {
				freq[x]++;//Konsa digit kitni bar aayega.
			}
		}

		//Expansion of Freq. Array.
		int na[31] {};
		int k = 0;//This is to iterate over the na array. (Current Index of na array.)

		//Iterate over your freq. array.
		for (int i = 0; i < 10; i++) {

			int cd = i;
			int cdf = freq[cd];

			while (cdf > 0) {
				na[k] = cd;
				k++;
				cdf--;
			}
		}

		int flag = 0;
		for (int i = 0; i < k - 2; i++) {
			for (int j = i + 1; j < k - 1; j++) {
				for (int l = j + 1; l < k; l++) {
					if ((na[i] + na[j] + na[l]) % 10 == 3) {
						cout << "Yes" << endl;
						flag = 1;
						break;
					}
				}
				if (flag) {
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}

		if (flag == 0) {
			cout << "No" << endl;
		}


	}

}

