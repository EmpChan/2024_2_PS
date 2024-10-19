#include <iostream>
#include <vector>

using namespace std;

vector<int>arr;
int dp[300001];

int main(){
    int k = 0, i = 1;
    while(k <=300000)
    {
        k += i*(i+1)/2;
        i++;
        arr.push_back(k);
    }
    //cout << arr.size() << '\n';
    int n;
    cin >> n;
    for(int j=1; j<=300000; j++){
        dp[j] = j;
        for(auto k : arr){
            if(k>j)break;
            dp[j] = min(dp[j], dp[j-k] + 1);
        }
    }
    //for(int t=1; t<=15; t++) cout << arr[t] << ' ' ;
    cout << dp[n];
    return 0;
}