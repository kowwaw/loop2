#include <bits/stdc++.h>

using namespace std;
bool primal(long long x){
    if ( x < 2 ) return false;
    for (long long i = 2; i <= sqrt(x); i++){
        if ( x % i == 0) return false;
    }
    return true;
}
long long cnt(long long x){
    int cnt = 0;
    for (int i = 2 ; i <= x ; i++){
        if (primal(i)){
            ++cnt;
        }
    }
    return cnt;
}
int main()
{
    long long n, k;
    long long  x = 0;
    cin >> n;
    while(n){
        k = n % 10;
        x = x*10  +k;
        n /= 10;
    }
    cout << cnt(x);
    return 0;
}