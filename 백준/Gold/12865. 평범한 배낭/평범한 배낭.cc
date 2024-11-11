#include <iostream>

using namespace std;

int dp[100001];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m, w, val;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> w >> val;
		for (int j = m; j >= w; j--) {
			dp[j] = max(dp[j], dp[j - w] + val);
		}
	}

	cout << dp[m];

	return 0;
}