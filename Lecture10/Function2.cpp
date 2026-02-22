#include<iostream>
using namespace std;

int sum(int x, int y) {
	// int ans = x + y;
	// return ans;

	x += 10;
	y += 10;

	cout << x << " " << y << endl;
	return x + y;
}


int main() {

	int a{10}, b{20};

	//We are passing the values as value in arguments of a function.
	int ans = sum(a, b);
	int value = sum(10, 20);

	cout << x << " " << y << endl;


}