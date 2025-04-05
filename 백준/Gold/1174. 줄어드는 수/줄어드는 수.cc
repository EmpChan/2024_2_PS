#include <iostream>
#include <queue>

using namespace std;

int n;
int cnt;
int ml;
int ans[20];

void sol(int len, int k){
    if(len == ml){
        cnt++;
        if(cnt == n){
            for(int i=0; i<ml; i++){
                cout << ans[i];
            }
            exit(0);
        }
        return;
    }
    for(int i = 0; i < k; i++){
        ans[len] = i;
        sol(len + 1, i);
    }
}

int main(){
    cin >> n;
    while(ml <= 10){
        ml++;
        sol(0, 10);
    }   
    cout << -1;
}