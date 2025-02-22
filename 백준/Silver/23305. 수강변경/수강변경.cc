#include <iostream>
#include <vector>
#define itn int

using namespace std;

int a[1000001];
int b[1000001];

int main(){
    int n,t;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> t;
        a[t]++;
    }
    for(int i=0; i<n;i++){
        cin >> t;
        b[t]++;
    }
    int cnt = 0;
    for(int i=0; i<=1000000;i++){
        cnt += max(b[i]-a[i],0);
    }
    cout << cnt;
    return 0;
}