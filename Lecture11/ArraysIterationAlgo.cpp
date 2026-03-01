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

	// for (int i = 0; i < n; i++) {
	// 	if (a[i] == target) {
	// 		cout << "Yes" << endl;
	// 		return 0;
	// 	}
	// }

	// cout << "No" << endl;

	//Linear Search
	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == target) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}