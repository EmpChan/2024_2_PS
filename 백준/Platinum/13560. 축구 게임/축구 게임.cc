#include <iostream>
#include <algorithm>

using namespace std;

int arr[10000], n;

bool is_valid(int s){
    if(s!=n*(n-1)/2)return 0;
    int total = 0;
    for(int i=0; i<n; i++){
        total+=arr[i];
        if(total < i*(i+1) / 2)return 0;
    }

    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 

    int t, s= 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        s+=t;
        arr[i] = t;
    }
    
    sort(arr,arr+n);

    if(is_valid(s)){
        cout << 1;
    }
    else{
        cout << -1;
    }
    
    return 0;
}