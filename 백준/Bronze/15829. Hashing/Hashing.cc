#include <iostream>
#include <cmath>

using namespace std;

long long mypow(int t,int tt){
    long long k =1;
    for(int i=0; i<tt; i++){
        k= (k*31)%1234567891;
    }
    return k;
}

int main()
{
    long long int wa = 0;
    char str[51];
    int n;
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        long long tmp = str[i] - 'a' + 1;
        long long tmp2 = mypow(31,i);
        wa = (wa+ (tmp*tmp2))%1234567891;
    }
    cout << wa % 1234567891;
}