#include<iostream>
using namespace std;


int main() {

	//Issue : You can only Print the current character not the
	//previous one.

	// char ch;
	// int count = 0;
	// while (cin.get(ch)) {
	// 	if (ch >= 'a' and ch <= 'z') {
	// 		count++;
	// 	}
	// }

	// cout << count << endl;

	int a[] {1, 2, 3, 4, 5, 6};//Direct List Initialisation.

	char b[] {'M', 'a', 'y', 'a', 'n', 'k'};
	char c[] {"Mayank"};

	// char d[100];

	// // for (int i = 0; i < 6; i++) {
	// // 	cin >> d[i];
	// // }
	// cin >> d;

	// // for (int i = 0; i < 6; i++) {
	// // 	cout << d[i];
	// // }
	// cout << d << endl;
	// int x = d[7];
	// cout << x << endl;

	// cout << d[7] << endl;


	// char e[] {"MayankisaBoy"};



	//NUll Character has to be provided by user.
	char e[] {'M', 'a', 'y', 'a', 'n', 'k', '\0'};
	cout << e << endl;

	//Null character is provided by the compiler.
	char f[] {"Mayank"};
	char g[] {"Samyak\0"};

	//Null character is provided by the compiler.
	char h[100];

	cin >> h;//remember it should only read 100 characters.(Make sure above size is appropriate.)

	cout << h << endl;

	//Always remember irrespective of the fact that
	//you have provided null character or not
	//character arrays will always end with null character.


	char m[] {"123345"};
	int x = m[3];
	cout << x << endl;
	cout << m[3] << endl;




}