#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>goTo;
vector<int>color;

void paint(int s, int e, int c) {
	int maxi = e;
	vector<int>tmp;
	for (int i = s; i <= e; i++) {
		if (color[i]) {
			tmp.push_back(i);
			i = goTo[i];
			maxi = max(maxi, i);
		}
		else {
			tmp.push_back(i);
			color[i] = c;
		}
	}
	for (auto i : tmp) goTo[i] = maxi;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, m,a,b,c;
	cin >> n >> m;
	goTo.resize(n + 1); color.resize(n + 1);
	for (int i = 1; i <= n; i++) goTo[i] = i;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		paint(a, b, c);
	}

	for (int i = 1; i <= n; i++) {
		cout << color[i] << ' ';
	}

	return 0;
}