#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n < 2) {
        cout << -1 << "\n";
        return 0;
    }

    int mx = INT_MIN, second_mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > mx) {
            second_mx = mx;
            mx = a[i];
        } else if (a[i] > second_mx && a[i] != mx) {
            second_mx = a[i];
        }
    }

    if (second_mx == INT_MIN) {
        cout << -1 << "\n";
    }
    else {
        cout << second_mx << "\n";
    }

    return 0;
}