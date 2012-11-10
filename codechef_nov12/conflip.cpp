#include <iostream>

using namespace std;

int main() {
	int t, g, start, q;
	long n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> g;
		for (int j = 0; j < g; ++j) {
			cin >> start >> n >> q;
			if (start != q)
				cout << (n >> 1) + (n & 1) << endl;
			else
				cout << (n >> 1) << endl;
		}
	}
}