#include<iostream>
using namespace std;


int main() {

	int a[5] {};
	//It is allowed.
	a[25] = 90;
	*(a + 25) = 100;
	cout << a[25] << endl;
	int p = 3;
	cout << a[25] << endl;


}