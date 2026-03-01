#include<iostream>
using namespace std;
/*

	Basic(a,n) : This function finds the maximum element by comparing the
				 adjacent element and put it at the last index.

	Swap(x,y) : Just swaps the values of x and y.

	Comparator(x,y) : This is a function used just for comparing the elements
				      of the containers.


*/

void Swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}


bool Compare(int &x, int &y) {

	if (x > y) {
		return false;//This means we want to swap for asc. order arrangement.
	} else {
		return true;//This means we don't want to swap for asc. order arrangement.
	}
}

void Basic(int *a, int n) {
	for (int i = 0; i < n - 1; i++) {

		if (Compare(a[i], a[i + 1]) == 0) {
			//Swap them :
			Swap(a[i], a[i + 1]);
		}
	}
}

void BubbleSort(int *a, int n) {

	for (int x = 0; x < n - 1; x++) {
		/*
			Current Task : Task x: Find the maximum in range [0,n-x-1] and
			put it at the end.
		*/
		for (int i = 0; i < n - x - 1; i++) {
			if (Compare(a[i], a[i + 1]) == 0) {
				//Swap them :
				Swap(a[i], a[i + 1]);
			}
		}
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

	//Basic(a, n);
	PrintArray(a, n);
	BubbleSort(a, n);
	PrintArray(a, n);

}