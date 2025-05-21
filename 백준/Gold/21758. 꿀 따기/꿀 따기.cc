#include <iostream>
#include <vector>

using namespace std;

long long honey[100001];
long long sh[100001];
long long n;

long long sol(){
    long long maxi = 0;
    // right is honey house
    for(int i=1; i<n-1; i++){
        maxi = max(maxi, sh[n-1] - honey[i] - honey[0] + sh[n-1] - sh[i]);
    }
    // left is honey house
    for(int i=1; i<n-1; i++){
        maxi = max(maxi, sh[n-1] - honey[n-1] - honey[i] + sh[i-1]);
    }
    // middle one is honey house
    for(int i=1; i<n-1; i++){
        maxi = max(maxi, sh[i] - honey[0] + sh[n-2] - sh[i-1]);
    }
    return maxi;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    for(int i=0; i<n; i++)cin >> honey[i];
    sh[0] = honey[0];
    for(int i=1; i<n; i++)sh[i] = honey[i] + sh[i-1];
    
    cout << sol();

    return 0;
}