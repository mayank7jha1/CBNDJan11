#include<iostream>
using namespace std;

int Solve(char *ch) {

	int ans = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		ans++;
	}

	return ans;
}



int main() {

	char ch[100];
	// cin >> ch;//It Cannot read white spaces.
	// cout << ch << endl;

	// Deliminator : Stoping Point
	cin.getline(ch, 100, 'B');
	cout << ch << endl;

	// Size of character array is 100.
	//Length of the character array is 21.

	//Reminder : Type Casting.
	int length = Solve(ch);
	cout << length << endl;





}