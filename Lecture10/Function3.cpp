#include<iostream>
using namespace std;

void sum(int *xptr, int *yptr) {

	// cout << xptr << endl;
	// cout << *xptr << endl;

	*xptr = 50;
	cout << *xptr << endl;


	return;
}


int main() {

	int a{20}, b{30};

	// cout << a << " " << b << endl;
	// cout << &a << " " << &b << endl;

	//Passing By Address.
	sum(&a, &b);

	cout << a << endl;


	//cout << xptr << endl;


}

//a-->8015
//b-->3015