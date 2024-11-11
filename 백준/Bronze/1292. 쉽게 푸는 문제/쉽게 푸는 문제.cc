#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
using info = pair<int, int>;

int main() {
	int n, m, s=0;
	cin >> n >> m;
	int t = 1,cnt=0;
	for (int i = 1; i <= 1000; i++) {
		if (cnt == t) {
			t++;
			cnt = 0;
		}
		if (i >= n && i <= m)s += t;
		cnt++;
	}
	cout << s;

	return 0;
}