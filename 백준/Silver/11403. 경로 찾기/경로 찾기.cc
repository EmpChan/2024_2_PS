#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;
bool visitable[100][100];

void bfs(int t){
    vector<bool>visit(n);
    queue<int>q;
    for(int i=0; i<n; i++){
        if(visitable[t][i]){
            q.push(i);
            visit[i] = 1;    
        }
    }
    while(!q.empty()){
        int now = q.front();
        q.pop();
        visit[now] = 1;
        for(int i=0; i<n; i++){
            if(visitable[now][i] && !visit[i]){
                q.push(i);
                visitable[t][i] = 1;
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> visitable[i][j];
        }
    }
    for(int i=0; i<n; i++){
        bfs(i);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << visitable[i][j]<< ' ';
        }
        cout << '\n';
    }
    return 0;
}               