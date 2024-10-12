#include <iostream>
#include <vector>

using namespace std;

void sol(){
    long long a,b,cnt = 1,d=0,ans = 0;
    cin >> b >> a;
    while(b>d){
        d +=a;
        ans+=cnt;
        cnt+=2;
    }
    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--)sol();
}