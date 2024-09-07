#include <iostream>

using namespace std;

int dp[301];
int stair[301];

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> stair[i];
    dp[0] = 0;
    dp[1] = stair[1];
    dp[2] = stair[2]+stair[1];
    for(int i=3; i<=n; i++){
        dp[i] = max(dp[i-2]+stair[i], stair[i] + stair[i-1] + dp[i-3]);
    }
    cout << dp[n];
}