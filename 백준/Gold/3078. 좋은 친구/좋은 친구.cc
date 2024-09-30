#include <iostream>
#include <queue>

using namespace std;

queue<string>q;
long long cnt, n, k,cnts[21];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;

    string tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        q.push(tmp);
        cnts[tmp.size()]++;
        if(q.size() <= k)continue;
        string now = q.front();
        q.pop();
        cnts[now.size()]--;
        cnt+=cnts[now.size()];
    }
    while(!q.empty()){
        string now = q.front();
        q.pop();
        cnts[now.size()]--;
        cnt+=cnts[now.size()];
    }
    cout << cnt;

    return 0;
}