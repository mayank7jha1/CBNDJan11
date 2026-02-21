#include<iostream>
using namespace std;


int main() {


	char ch;
	cin >> ch;

	if (ch >= 97 and ch <= 'z') {
		ch = ch - 32;
	}
	cout << ch;

	while (cin >> ch) {
		cout << ch;
	}


}