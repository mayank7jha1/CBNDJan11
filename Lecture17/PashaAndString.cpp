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

	//Computations : n*m : ~ 10^10

	for (int i = 0; i < m; i++) {

		int si;//This index is based on 1 based indexing.
		cin >> si;
		si--;

		int ei = length - si - 1;//Based on 0 based indexing.
		//Now Just Reverse the string from si to ei.
		Reverse(ch, si, ei);
	}

	cout << ch << endl;
}