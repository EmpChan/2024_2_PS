#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;
using inf = pair<int, int>;

int n, m;
vector<int>arr;

void sol() {
    priority_queue<inf, vector<inf>, greater<inf>>pq;
    for (int i = 0; i < n; i++) {
        while (!pq.empty() && (pq.top().second < i - m + 1)) {
            pq.pop();
        }
        pq.push(make_pair(arr[i], i));
        cout << pq.top().first << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    arr.resize(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
    sol();

    return 0;
}