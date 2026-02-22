#include<iostream>
using namespace std;


const int x {100};

int main() {

	int x{1001};//x=90
	x += 1;

	if (x > 10) {
		x += 1;
		cout << x << endl;//(1)
		int x{1000};
		x += 1;

		cout << x << endl;//(2)
	}

	if (x > 50) {
		x += 1;
		x = 90;
		cout << x << endl;//(3)
		int x{100};//101
		x += 1;
		cout << x << endl;//(4)
	}


	cout << x << endl;//(5)
	x += 1;
}


/*
	1003
	1001
	90
	101
	90


*/