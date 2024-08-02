#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

struct info{
	int pri,job,pid;
};

struct compare{
	bool operator() (struct info a, struct info b){
		if (a.pri == b.pri) return a.pid > b.pid;
		else return a.pri < b.pri;
	}
};

priority_queue<struct info, vector<struct info>, compare>pq;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t,n;
	cin >> t >> n;
	for(int i=0; i<n; i++){
		struct info a; 
		cin >> a.pid >> a.job >> a.pri;
		pq.push(a);
	}
	for(int i=0; i<t; i++){
		auto k = pq.top();
		pq.pop();
		k.pri--;
		k.job--;
		if(k.job > 0){
			pq.push(k);
		}
		cout << k.pid << '\n';
	}

	return 0;
}