#include<iostream>
using namespace std;


int main() {

	long long int n, m, a;
	cin >> n >> m >> a;

	long long int ansr = ((m + a - 1) / a);
	long long int ansc = ((n + a - 1) / a);

	cout << ansc*ansr << endl;

}