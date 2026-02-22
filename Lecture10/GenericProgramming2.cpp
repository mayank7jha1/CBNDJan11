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

template<typename T>
int sum(T a = 0, T b = 0, T c = 0, T d = 0, T e = 0) {
	return a + b + c + d + e;
}

int main() {

	//User can give the value of t in every parameter
	cout << sum( 97, 88, 999, 88) << endl;

}