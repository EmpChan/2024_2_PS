#include <iostream>
#include <set>
#include <map>
#include <math.h>

using namespace std;

int arr[] = { 1,2,3,5,7,9 };
int n;
int ans[8];
int primes[20000];
int c;
bool isp[100001];

void sosu() {
    isp[1] = 1;
    for (int i = 2; i < 500; i++) {
        for (int j = i + i; j <= 100000; j += i)isp[j] = 1;
    }
    for (int i = 2; i < 100000; i++) {
        if (!isp[i])primes[c++] = i;
    }
}

bool isprime(int k) {
    int r = 0;
    for (int i = 0; i <= min(k,n-1); i++) {
        r = r * 10 + ans[i];
    }
    if (r < 100000) {
        return isp[r];
    }
    else {
        for (int i = 0; primes[i] <= sqrt(r); i++) {
            if (r % primes[i]==0)return 1;
        }
        return 0;
    }
}

void sol(int k) {
    if (k == n) {
        if (isprime(k))return;
        for (int i = 0; i < n; i++) cout << ans[i];
        cout << '\n';
    }
    else {
        for (int i = 0; i < 6; i++) {
            ans[k] = arr[i];
            if(!isprime(k)) sol(k + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cout.tie(0);
    sosu();
    cin >> n;
    sol(0);
    return 0;
}