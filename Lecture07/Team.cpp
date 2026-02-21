#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int ans = 0;//Total Kitni Problems solve hue.

	int c = 1;//Starting Point.
	// int x, y, z;//This is also okay.


	//Ending Point
	while (c <= n) {

		//Task:
		int x, y, z;
		// int x;//Not Allowed
		cin >> x >> y >> z;

		//Sum : Current Problem ko kaun kaun solve kar paaya
		//Since Previous sum se hume farak nahi padhta isliye hum sum ko yaha banaye ya bahar bahane koi issue nahi hain unlike ans.
		int sum = x + y + z;

		if (sum >= 2) {
			ans += 1;
		}

		c += 1;//Next Stage
	}

	cout << ans << endl;
}





// Idea:



// 5
// 3 1 4 5



// int ans=n*(n-1)/2;

// int c = 1;
// while (c <= n - 1) {
// 	int x;
// 	cin >> x;
// 	sum += x;
// }

// cout<<ans-sum<<endl;