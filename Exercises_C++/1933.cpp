#include <bits/stdc++.h>
using namespace std;

int main() {

	int c1,c2;
	cin >> c1 >> c2;

	if (c1 == c2) {
		cout << c1 << endl;
	}
	else if (c1 != c2 && c1 < c2) {
		cout << c2 << endl;
	}
	else {
		cout << c1 << endl;
	}
}
