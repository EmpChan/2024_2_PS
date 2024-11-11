#include <iostream>

using namespace std;

bool arr[10001];

void era(){
    for(int i=2; i<=100; i++){
        if(arr[i])continue;
        for(int j=i*i; j<=10000; j+=i){
            arr[j]=1;
        }
    }
}

int main(){
    era();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=n/2; i>=2; i--){
            if(!arr[i] && !arr[n-i]){
                cout << i << ' ' << n-i << '\n';
                break;
            }
        }
    }
}