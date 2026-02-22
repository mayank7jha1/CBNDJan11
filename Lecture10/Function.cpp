#include<iostream>
using namespace std;

//Function Definition
int sum(int x, int y) {
	return x + y;//Returning an integer.
}

int main() {

	int x, y;
	cin >> x >> y;
	cout << sum(x, y) << endl;//Function Call
	int ans = sum(x, y);//Function Call
	cout << ans << endl;

}