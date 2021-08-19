#include <bits/stdc++.h>

using namespace std;

set<int> Divisors(int n) {
	set<int> ans;
	for (int i = 1; i <= (int) sqrt(n); i++) {
		if (n % i == 0) {
			if (n / i == i) {
				ans.insert(i);
			} else {
				ans.insert(i);
				ans.insert(n / i);
			}
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		// view the image in this repository for better understanding
		if (a == b) {
			// if 'a' is equal to 'b', then the answer is infinite (output -1)
			cout << -1;
		} else {
			// otherwise, find all the divisors of |'a' - 'b'|
			set<int> s = Divisors(abs(a - b));
			cout << (int) s.size();
		}
		cout << '\n';
	}
	return 0;
}
