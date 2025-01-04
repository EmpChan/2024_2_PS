#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int>qst;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    deque<int>dq;
    int n, tmp, m;
    cin >> n;
    qst.resize(n);
    for(int i=0; i<n; i++)cin >> qst[i];
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(!qst[i])dq.push_front(tmp);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> tmp;
        dq.push_back(tmp);
        cout << dq.front() << ' ';
        dq.pop_front();
    }

    return 0;
}               