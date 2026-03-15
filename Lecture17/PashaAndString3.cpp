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

	int length = strlen(ch);

	int pre[N + 1] {};

	//Query[si,ei] = Swap ek bar.

	for (int i = 0; i < m; i++) {
		int si;
		cin >> si;
		si--;
		pre[si]++;
	}

	for (int i = 1; i < length / 2; i++) {
		pre[i] = pre[i - 1] + pre[i];
	}

	for (int i = 0; i < length / 2; i++) {
		if (pre[i] % 2 == 1) {
			swap(ch[i], ch[length - i - 1]);
		}
	}

	cout << ch << endl;

}