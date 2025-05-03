#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;

vector<int> ed[5001];

int bfs(int s){
    queue<int>q;
    vector<int>visit(n+1);
    int w = 0;
    int total = 0;
    q.push(s);
    while(!q.empty()){
        w++;
        int cnt = q.size();
        for(int i=0; i<cnt; i++){
            int v = q.front();
            q.pop();
            for(auto j : ed[v]){
                if(visit[j])continue;
                visit[j] = 1;
                q.push(j);
                total += w;
            }
        }
    }

    return total;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        ed[a].push_back(b);
        ed[b].push_back(a);
    }
    int mini = 1e9;
    int minidx = 0;
    for(int i=1; i<=n; i++){
        int tmp = bfs(i);
        if(tmp >= mini)continue;
        mini = tmp; 
        minidx = i;
    }   
    
    cout << minidx;

    return 0;
}