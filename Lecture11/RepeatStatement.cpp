#include<iostream>
using namespace std;


int main() {

	/*
		While :
		for
		foreach
	*/


	// int x = 1;//Starting Point

	// //Ending Point
	// while (x <= 5) {

	// 	//Task:
	// 	cout << x << endl;

	// 	//Next Stage
	// 	x++;
	// }

	/*
	for (Starting Point(Multiple (,)); Ending Point (Multiple (,));
			Next Stage(Multiple(,))) {

			Scope of for (Repeat Statement.)

	}*/

	// int y;

	// for (y = 1; y <= 5; y++) {
	// 	cout << y << endl;
	// }

	// cout << y << endl;

	// int y = 1;

	// for (; y <= 5;) {
	// 	cout << y << endl;
	// 	y++;
	// }

	// cout << y << endl;


	// for (int z = 1; z <= 5; z++) {
	// 	cout << z << endl;
	// }

	// cout << z << endl;//Error

	// for (int x = 1, y = 10; (x <= 10 and y >= 1); x++, y--) {
	// 	cout << x << " " << y << endl;
	// }


	/*
		For Each can only be used on a container/Data Structure:

		For "Every Element" of this container a(Identifier of my currrent container) that is going to represented by this variable(Identifier)
		fo the following task;
		for(){

		}

	*/

	int a[] {4, 3, 4, 5, 6, 6, 7};

	for (int x : a) {
		cout << x << " ";
	}

	cout << endl;

	for (int i = 0; ((i < 7) and (i != 4)); i += 2) {
		cout << a[i] << " ";
	}





}