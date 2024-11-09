#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct punch{
    long long atk,def,w;
};

vector<struct punch> v; 

int main(){
    int n;
    long long ans = 0;
    cin >> n;
    v= vector<struct punch>(n);
    for(int i=0; i<n; i++)cin >> v[i].atk;
    for(int i=0; i<n; i++)cin >> v[i].def;
    for(int i=0; i<n; i++){double t; cin >> t; v[i].w = 10*t;}
    for(int i=0; i<n; i++){
        if(v[i].w >=10){
            ans += (long long)(v[i].atk*v[i].w/10);
            ans -= v[i].def;
        }
        else{            
            ans -= (long long)(v[i].def*v[i].w/10);
            ans += v[i].atk;
        }
    }

    cout << ans;

    return 0;
}