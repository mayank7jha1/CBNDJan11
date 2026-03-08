#include<iostream>
#include<climits>
using namespace std;

/*
	Given an array a find the frequency of all the element in array.

	I know how to find freq of a single element.
	Find frequency of all.


	Basic Appraoch : Go to every element and treat the current element
	as key and find its freq.



*/


/*
	Computations : n*n
	Data Freq ka vo element wise sorted nahi hain.
*/
void Approach1(int *a, int n) {

	for (int i = 0; i < n; i++) {
		int key = a[i];

		if (a[i] == INT_MAX) {
			continue;
		}

		int count = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] == key) {
				count++;
				a[j] = INT_MAX;
			}
		}

		cout << key << " ---> " << count << endl;
	}
	cout << "------------------------------" << endl;

}

/*

	Freq of elements are in sorted manner.
	Computations : (maxi-mini+1)*n

	This will be slower than the approach 1.
*/


void Approach2(int *a, int n, int mini, int maxi) {

	for (int i = mini; i <= maxi; i++) {
		int key = i;
		int count = 0;

		for (int j = 0; j < n; j++) {
			if (a[j] == key) {
				count++;
			}
		}

		if (count > 0) {
			cout << key << " ---> " << count << endl;
		}
	}

	cout << "------------------------------" << endl;
}

void Swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

bool Compare(int &x, int &y) {
	if (x > y) {
		return false;
	} else {
		return true;
	}
}


void BubbleSort(int *a, int n) {
	for (int x = 0; x < n - 1; x++) {
		for (int i = 0; i < n - x - 1; i++) {
			if (Compare(a[i], a[i + 1]) == 0) {
				Swap(a[i], a[i + 1]);
			}
		}
	}
}


//Sorted

/*

	Sorting Computations + (~n)
	nLogn + n


*/
void Approach3(int *a, int n) {
	BubbleSort(a, n);

	int PreviousElement = INT_MAX;

	for (int i = 0; i < n; i++) {
		int key = a[i];//CurrentElement
		int count = 0;

		if (PreviousElement == key) {
			continue;
		}

		for (int j = i; j < n; j++) {
			if (a[j] != key) {
				break;
			}
			if (a[j] == key) {
				count++;
			}
		}

		PreviousElement = key;
		cout << key << " ---> " << count << endl;
	}

	cout << "------------------------------" << endl;
}

void Approach4(int *a, int n) {

}



int main() {

	int n;
	cin >> n;

	int a[n];
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	//Approach1(a, n);
	//Approach2(a, n, mini, maxi);
	Approach3(a, n);
	// Approach4(a, n);


}
