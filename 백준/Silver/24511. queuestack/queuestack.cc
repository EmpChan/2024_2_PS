#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int sq[100001];
int da[100001];
queue<int>q;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> sq[i];
    }
    for(int i=0; i<n; i++){
        cin >> da[i];
    }
    for(int i=n-1; i>=0; i--){
        if(sq[i])continue;
        q.push(da[i]);
    }
    int m;
    cin >> m;
    for(int j=0; j<m; j++){
        int tmp;
        cin >> tmp;
        q.push(tmp);
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}