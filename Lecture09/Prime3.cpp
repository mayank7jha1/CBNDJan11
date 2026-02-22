#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;

	int c = 2;
	int flag = 0;

	while (c <= n - 1) {

		if ((n % c) == 0) {
			flag = 1;
			break;
		}


		c += 1;
	}

	//Kya main kabhi bhi line number 15 par gaya hu.
	if (flag == 0) {
		cout << "Prime" << endl;
	} else {
		cout << "Not Prime" << endl;
	}




}