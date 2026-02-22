#include<iostream>
using namespace std;


void sum(int &x, int &y) {
	cout << x << " " << y << endl;
}

void sum2(int &a, int &b) {

	//a is a reference variable for x and hence it is another name for x or an alias of x.
	a = 900;
	cout << x << endl;
	cout << a << endl;
}

int main() {

	int x, y;
	cin >> x >> y;

	// sum(x, y);
	sum2(x, y);

	cout << x << endl;
	cout << a << endl;

}