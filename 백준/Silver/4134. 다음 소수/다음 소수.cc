#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_prime[300001];
vector<int>primes;

void sieve(int x){
    is_prime[0]=1;
    is_prime[1]=1;
    for(long long i=2; i<=x; i++){
        if(!is_prime[i])primes.push_back(i);
        if(is_prime[i] || i*i > x)continue;
        for(long long j=i*i; j<=x; j+=i){
            is_prime[j]=1;
        }
    }
}

void sol(){
    long long n;
    cin >> n;
    if(n<2)n=2;
    bool flag=0;
    while(!flag){
        bool f2 = 0;
        for(auto i : primes){
            if(i*i > n)break;
            if(n%i==0){
                f2 = 1;
                break;
            }
        }
        if(f2){
            n++;
            continue;
        }
        cout << n << '\n';
        return;
    }
}

int main(){
    int t;
    cin >> t;
    sieve(300000);
    
    while(t--){
        sol();
    }
    return 0;
}