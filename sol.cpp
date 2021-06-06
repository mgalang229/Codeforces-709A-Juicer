#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, b, d;
	cin >> n >> b >> d;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long waste_section = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > b) {
			// if the current element is STRICLY greater than 'b', then skip it
			continue;
		}
		// otherwise, add the current element to 'waste_section'
		waste_section += a[i];
		if (waste_section > d) {
			// if 'waste_section' is STRICTLY greater than 'd', then reset it to 0
			waste_section = 0;
			// increment 'cnt'
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
