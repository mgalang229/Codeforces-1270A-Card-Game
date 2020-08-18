#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	vector<int> a(k1), b(k2);
	for(auto &it : a) cin >> it;
	for(auto &it : b) cin >> it;
	int f = *max_element(a.begin(), a.end());
	int s = *max_element(b.begin(), b.end());
	if(f > s) cout << "YES";
	else cout << "NO";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
