#include <iostream>
#include <vector>

using namespace std;

long long getval(int n,int t){
    long long ans = 0, i = 1;
    while(i<=t){
        long long tmp = n / i;
        long long j = n / tmp;
        if(j > t)j=t;
        ans += tmp * (j-i+1);
        i = j+1;
    }
    

    return ans;
}

void sol(){
    int n,s,e;
    cin >> n >> s >> e;
    cout << getval(n,e) - getval(n,s-1) << '\n';
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int q;
    cin >> q;
    while(q--)sol();

    return 0;
}