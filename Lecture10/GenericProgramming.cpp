#include<iostream>
using namespace std;
/*
	Function Overloading

	Overloading : Koi cheeze alag alag situation me
	alag alag tareeke se kaam kar rahi hain.
	(Duggal Sahab)

	Function Overloading :
	You are allowed to have two different functions
	with the same name.
	but big but :
	Either in terms of number of arguments
	or
	the type of the arguments.


	Default Arguments
	Templates
*/

int sum(int x, int y) {
	return x + y;
}

//Error:
// double sum(int x, int y) {
// 	return x + y;
// }

double sum(int x, double y) {
	cout << "Yo I am here" << endl;
	return x + y;
}

int sum(double x, double y) {
	return x + y;
}

int sum(int x, int y, int z) {
	return x + y + z;
}

int sum(int x, int y, double z) {
	return x + y + z;
}



int main() {

	cout << sum(18, 97.5) << endl;

}