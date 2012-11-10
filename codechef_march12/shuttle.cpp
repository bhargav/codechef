#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (a == 0)
		return b;
	int t;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main() {
	int t, n, count;
	cin >> t;
	while(t--) {
		cin >> n;
		count = 0;
		for(int i = 1; i < n; ++i)
			if (gcd(i, n) == 1)	count++;
		cout << count << endl;
	}
}