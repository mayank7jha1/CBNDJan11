#include<iostream>
using namespace std;


int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		// int a[n];
		int freq[10] {};//This is to store the freq. of the digits of n numbers.

		/*		for (int j = 0; j < n; j++) {
					cin >> a[j];
					a[j] %= 10;//Store only the last digits.
					freq[a[j]]++;
				}
		*/

		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			x %= 10;
			if (freq[x] < 3) {
				freq[x]++;//Konsa digit kitni bar aayega.
			}
		}

		/*
			Idea :
				1. We want only the last digits of the numbers.
				2. Build the freq. array for the last digits.
				3. If the freq. of any digit is greater than 3 then update it to 3 and if any digit has a freq. less than 3 leave it as
				it is.
				4. Counting Sort.


				Example :
				Freq. Array  :

		(Index : Digits)       (A[index] : Frequency of Digits ko)
				0 			:  2
				1           :  3
				2           :  1
				3           :  0
				4           :  3
				5           :  1
				6           :  2
				7           :  1
				8           :  0
				9           :  3


				I need to create a new array :
				0,0,1,1,1,2,4,4,4,5,6,6,7,9,9,9

				And then apply your brute force here.
		*/

		int na[31] {};
		int k = 0;//This is to iterate over the na array.

		//Iterate over your freq. array.
		for (int i = 0; i < 10; i++) {
			int cd = i;
			int cdf = freq[cd];

			//Task : i digit ko na vale array me freq[cd]/freq[i] times daalna hain.
			// while (cdf > 0) {
			// 	na[k] = cd;
			// 	k++;
			// 	cdf--;
			// }

			for (; cdf > 0; cdf--, k++) {
				na[k] = cd;
			}
		}

		/*
			Now You have your new array : Containing only the desired values.
			The size of this new array is k.

			Computations : 30*30*30*1000 : This will run in 1 sec.
		*/

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


/*k = 0;

na[] = {};

na[0] = 0;
k++;
cdf--;
k = 1;
cdf--;
na[1] = 0;
k++;
cdf--;
na[2] = 0;


Prefix,suffix,freq array, 2sum,3sum

*/