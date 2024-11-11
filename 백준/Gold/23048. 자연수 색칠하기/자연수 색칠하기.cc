#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;
using lld = long long;

int isprime[500001];
int primes[100000];
int c, n;

void era() {
	c = 1;
	for (int i = 2; i <= n; i++) {
		if (isprime[i])continue;
		primes[c++] = i;
		for (int j = i; j <= n; j += i)isprime[j] = c;
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> n;
	era();
	isprime[1] = 1;
	cout << c << '\n';
	for (int i = 1; i <= n; i++) {
		cout << isprime[i] << ' ';
	}


	return 0;
}