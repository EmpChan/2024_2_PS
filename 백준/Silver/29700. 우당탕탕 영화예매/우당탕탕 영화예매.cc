#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    string t;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> t;
        int cnt = 0;
        for(auto j : t){
            if(j=='0')cnt++;
            else{
                ans += max(0, cnt-k+1);
                cnt = 0;
            }
        }
        ans += max(0, cnt-k+1);
    }
    cout << ans;

    return 0;
}               