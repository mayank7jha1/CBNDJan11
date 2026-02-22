#include<iostream>
using namespace std;


int main() {

	int x{89};
	const int y{150};

	//y = 1888;//Not Allowwed;

	if (y > 90) {
		//int y = 100;

		y = 1000;
	}

}