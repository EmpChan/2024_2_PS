#include <iostream>
#include <vector>
#include <map>

using namespace std;

int cnts[100001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    int n,t,i;
    cin >> n;
    for(i=0; i<n; i++){cin >> t; cnts[t]++;}
    for(i=100000; i>=0;i--){if(cnts[i])break;}
    if(cnts[i] == n)cout << (cnts[i]%2?"koosaga":"cubelover");
    else cout << "koosaga";
    return 0;
}