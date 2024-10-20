#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct inf{
    int p,g,w;
};

bool place[1001];
queue<inf>q; 

void sol(){
    int cnt = -1;
    while(!q.empty()){
        queue<inf>g;
        cnt++;
        while(!q.empty()){
            inf now = q.front();
            q.pop();
            if(now.p < now.g && !place[now.p+1]){
                place[now.p] = 0;
                place[now.p+1]= 1;
                now.p++;
                g.push(now);
                continue;
            }
            else if(now.p == now.g){
                now.w++;
                if(now.w<5){
                    g.push(now);
                    continue;
                }
                place[now.g] = 0;
                continue;
            }
            g.push(now);
        }
        swap(q,g);
    }
    cout << cnt;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n;
    for(int i=0; i<n; i++){cin >> m;q.push({0,m,0});}
    sol();

    return 0;
}