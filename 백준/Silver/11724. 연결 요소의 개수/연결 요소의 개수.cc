#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>arr;
vector<bool>visited;

void dfs(int t){
    visited[t] = 1;
    for(auto i : arr[t]){
        if(visited[i])continue;
        dfs(i);
    }
}

int main(){
    int n,m, cnt = 0;
    cin >> n >> m;
    arr.resize(n+1);
    visited.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(visited[i])continue;
        dfs(i);
        cnt++;
    }

    cout << cnt;

    return 0;
}