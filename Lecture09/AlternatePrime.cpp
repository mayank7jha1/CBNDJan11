#include<iostream>
using namespace std;

/*
	 Prime Number Till N :

	Given a Value n , Prime all the prime numbers
	till n.

	Idea :

	Approach:
	Task  : Go to Every number from 2 to n.
		   SubTask : For Every Task/Number check if the
					 current number is prime or not.


*/


int main() {

	int n;
	cin >> n;

	int a = 2;

	while (a <= n) {

		//For my current number a : check if a is prime or not.

		int c = 2;
		int flag = 0;

		while (c <= a - 1) {

			if ((a % c) == 0) {
				flag = 1;
				break;
			}


			c += 1;
		}

		if (flag == 0) {
			cout << a << " ";
		}



		a += 1;
	}


}