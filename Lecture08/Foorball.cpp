#include<iostream>
using namespace std;


int main() {

	char ch;
	int flag = -1;
	int C0 = 0, C1 = 0;
	int Total = 0;
	int count = 0;


	while (cin.get(ch)) {
		//Logic:

		if (ch == '0') {
			//This means current character is zero.
			if (flag == 0 or flag == -1) {
				C0 += 1;
				flag = 0;
				if (C0 >= 7) {
					cout << "Yes" << endl;
					return 0;
				}

			} else {
				//Prev and current character mismatch.
				//flag=1 and curent is 0.
				C0 = 1;
				C1 = 0;
				flag = 0;
			}

		} else {

			//This means current character is one.

			if (flag == 1 or flag == -1) {
				C1 += 1;
				flag = 1;
				if (C1 >= 7) {
					cout << "Yes" << endl;
					return 0;
				}
			} else {
				//Prev and current character mismatch.
				//flag=0 hain and current=1
				C1 = 1;
				C0 = 0;
				flag = 1;
			}
		}



		// flag ko current character se update karna hain.
		// if (C0 >= 7 or C1 >= 7) {
		// 	cout << "Yes" << endl;
		// 	return 0;
		// }
	}

	cout << "No" << endl;

}