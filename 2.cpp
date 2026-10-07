#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string
#define ld long double
#define all(a) (a.begin(), a.end())

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    ll s, d; 
    cin >> n >> s >> d;

    multiset<ll> ms;
    for (int i = 0; i < n; ++i){
        ll x; cin >> x;
        ms.insert(x);
    }    
    
    ll res = 0;

    while (!ms.empty()) {
        ll a = *ms.begin();
        ms.erase(ms.begin()); 

        ll target = max(a, s - a);
        auto it = ms.lower_bound(target);

        if (it != ms.end() && *it <= a + d) {
            res++;       
            ms.erase(it); 
        }
    }

    cout << res;
    return 0;
}