#include<iostream>
using namespace std;

//Function Definition
void SelectionSort(int *a, int n) {

	//This Outer Loop symbolises how many times I have to perfrom Tasks.
	for (int x = 0; x < (n - 1); x++) {

		/*
			Current Task is : Task x : Find the minimum in range [x,n-1]
			and swap it with a[x].
		*/
		int miniIndex = x;
		for (int i = x + 1; i < n; i++) {
			if (a[i] < a[miniIndex]) {
				miniIndex = i;
			}
		}

		//Swap a[miniIndex] and a[x].
		int temp = a[x];
		a[x] = a[miniIndex];
		a[miniIndex] = temp;
	}

}

void PrintArray(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Function Call
	SelectionSort(a, n);
	/*
		In the above Function Call a is passed by address and n is passed
		by value.
	*/

	PrintArray(a, n);
}