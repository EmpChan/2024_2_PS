#include <iostream>
#include <vector>
#include <queue>
#define MAX 2000000007

using namespace std;

vector<vector<pair<int,int>>>edge(20001);
vector<int>dist(20001,MAX);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    
void dikstra(int r){
    dist[r] = 0;
    for(auto i : edge[r]){
        pq.push(i);
        dist[i.second] = min(dist[i.second], i.first);
    }

    while(!pq.empty()){
        int w = pq.top().first, d = pq.top().second;
        pq.pop();

        if(dist[d] < w)continue;

        for(auto i : edge[d]){
            int nw = w+i.first;
            int nd = i.second;
            if(dist[nd] <= nw)continue;
            dist[nd]= nw;
            pq.push({nw,nd});
        }
    }

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int v,e,s,a,b,c;
    cin >> v >> e >> s;
    while(e--){
        cin >> a >> b >> c;
        edge[a].push_back({c,b});
    }
    dikstra(s);
    for(int i=1; i<=v; i++){
        if(dist[i] == MAX){
            cout << "INF\n";
        }
        else cout << dist[i] << '\n';
    }

    return 0;
}