#include <iostream>
#include <algorithm>

using namespace std;

int arr[10000];

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

    int n,r, s =0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        s += arr[i];
        if (s >= i * (i + 1) / 2) {
            continue;
        }
        else {
            cout << -1;
            return 0;
        }
    }
    if (s != n * (n - 1) / 2)cout << -1;
    else cout << 1;
    
    return 0;
}