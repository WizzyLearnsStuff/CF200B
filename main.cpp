#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		s += t;
	}

	cout << ((double)s / n);
}
