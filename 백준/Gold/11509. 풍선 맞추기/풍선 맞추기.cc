#include <iostream>
#include <vector>

using namespace std;

int arrow[1000001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,t,ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        if(arrow[t]){
            arrow[t]--;
            arrow[t-1]++;
        }
        else{
            arrow[t-1]++;
        } 
    }
    for(int i=0; i<=1000000; i++){
        ans+=arrow[i];
    }
    cout << ans;

    return 0;
}