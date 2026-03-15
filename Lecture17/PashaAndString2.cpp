#include<iostream>
#include<cstring>
using namespace std;
const int N = 2e5 + 3; //2*10^5+3

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}


void Reverse(char *ch, int si, int ei) {

	while (si <= ei) {
		swap(ch[si], ch[ei]);
		si++;
		ei--;
	}
}


int main() {

	char ch[N];
	cin >> ch;

	int m;
	cin >> m;

	int length = strlen(ch);//This function returns the length of the character aarray.

	// Find out konsa index kitni bar swap hoga.
	int pre[N + 1] {};

	for (int i = 0; i < m; i++) {
		int si;//This index is based on 1 based indexing.
		cin >> si;
		si--;
		pre[si]++;
		//End Point ki zarurat nahi hain.
		// pre[ei+1]--;
	}

	for (int i = 1; i < length / 2; i++) {
		pre[i] = pre[i - 1] + pre[i];
	}

	// for (int i = 0; i < length; i++) {
	// 	cout << pre[i] << " ";
	// }

	// cout << endl;

	for (int i = 0; i < length / 2; i++) {
		if (pre[i] % 2 == 1) {
			swap(ch[i], ch[length - i - 1]);
		}
	}

	cout << ch << endl;

}