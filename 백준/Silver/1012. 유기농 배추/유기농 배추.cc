#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int n,m;
int bat[50][50];

void dfs(int x,int y){
    for(int i=0; i<4; i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if(nx < 0 || nx>=m || ny<0 || ny>=n)continue;
        if(bat[nx][ny]==0)continue;
        bat[nx][ny]=0;
        dfs(nx,ny);
    }
}

void sol(){
    int cnt = 0;
    int k,a,b;
    cin >> m >> n >> k;
    for(int i=0;i<k; i++){
        cin >> a >> b;
        bat[a][b] = 1;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(!bat[i][j])continue;
            bat[i][j] = 0;
            dfs(i,j);
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin >> t;
    while(t--)sol();

    return 0;
}