#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int c = 1;//Starting Point

	int sum = 0;

	//Ending Point
	while (c <= n) {

		//Task:

		int x;
		cin >> x;
		// int sum = 0;
		sum += x;

		//Next Stage
		c += 1;
	}

	cout << sum << endl;

}