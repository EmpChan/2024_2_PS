#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	stack<pair<long long,long long>>s;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int a,b;
		cin >> a >> b;
		if(a==1){
			s.push({b,1});
			continue;
		}
		if(s.empty())continue;
		int stand = s.top().first - b;
		int cnt = 0;
		while(!s.empty() && stand <= s.top().first){
			cnt+=s.top().second;
			s.pop();
		}
		if(stand <= 0)continue;
		s.push({stand,cnt});
	}

	long long total= 0;
	while(!s.empty()){
		total+=s.top().first * s.top().second;
		s.pop();
	}

	cout << total;

	return 0;
}