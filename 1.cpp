#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string
#define ld long double

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,cnt=0;
    cin >> n;
    cout << 1;
    for(ll i = 2; i <= n; i++){
        if(n % i == 0){
            cout << "*" << i;
        }
    }
    

    return 0;
}