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

	/*
		I know for every query I have to perfrom operations in a range.
		We will find out directly which operations will be performed how many times.
	*/

	int oc[m + 1] {}; //oc[i] : ith Operation kitni bar karna hain.

	for (int i = 1; i <= k; i++) {
		int x, y;
		cin >> x >> y;
		/*
			You can visualise it as  : [x,y] = +1;
		*/

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


	int difference[n + 1] {};

	for (int i = 1; i <= m; i++) {

		/*
			Currently You are trying to perform
			operation no. i , oc[i] times.

			What does operation i means:

			l[i] se lekar r[i] tak d[i] ko kardo.

			ith operation oc[i] times karne ka kya
			matlab :
			l[i] se lekar r[i] tak aap (oc[i]*d[i])
			ko add kardo.

		*/


		//Brute Force :
		for (int j = l[i]; j <= r[i]; j++) {
			difference[j] += (oc[i] * d[i]);
		}
	}



	for (int i = 1; i <= n; i++) {
		cout << difference[i] << " ";
	}



}