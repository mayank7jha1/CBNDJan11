#include<iostream>
using namespace std;


int main() {

	// int a[3];//Array Definition
	// int b[3] {2, 4, 9};//Direct List Initialisation
	// int c[3] = {2, 9, 10};//Copy List Initialisation

	// int d[] {4, 5, 6, 7, 19};//Size is 5.
	// int e[7] {4, 5, 6, 7, 19};//Size is 7.

	// int f[10] {0};
	// int g[10] {};//Value Initialisation

	// int h[10] {1};

	int a[] {2, 5, 6, 7, 8, 10};

	cout << a << endl; 			//6422264
	cout << a + 1 << endl;      //6422268

	*(a + 0) = 10;

	cout << *(a + 4) << endl;
	cout << a[4] << endl;

	int x = 0;//This is treated as count and index of array a.
	while (x < 6) {

		// cout << *(a + x) << endl;
		cout << a[x] << endl;


		x++;
	}




}