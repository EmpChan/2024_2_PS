#include <iostream>
#include <vector>

using namespace std;

vector<int>tree[10001];
int visit[10001];
int cnt,acCnt;
bool acpnt[10001];

int dfs(int now, bool root) {
	visit[now] = ++cnt;
	int n = visit[now];

	int child = 0;
	for (int i = 0; i < tree[now].size(); i++) {
		int next = tree[now][i];
		if (!visit[next]) {
			child++;
			int low = dfs(next, 0);
			n = min(low, n);
			if (!root && low >= visit[now] && !acpnt[now]) {
				acpnt[now] = 1;
				acCnt++;
			}
		}
		else {
			n = min(n, visit[next]);
		}
	}
	if (root && child > 1) {
		acpnt[now] = 1;
		acCnt++;
	}
	return n;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int v, e,a,b;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	for (int i = 1; i <= v; i++) {
		if (!visit[i]) {
			dfs(i, 1);
		}
	}

	cout << acCnt << '\n';
	for (int i = 1; i <= v; i++) {
		if (acpnt[i])cout << i << ' ';
	}
	
	return 0;
}