/*
	While the user is giving values take input from the user and print
	the sum of all the numbers.
*/
#include<iostream>
using namespace std;


int main() {

	int x;
	int sum{0};

	while (cin >> x) {
		sum += x;
	}

	cout << sum << endl;

}