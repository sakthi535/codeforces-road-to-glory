#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;

        ll n,m,a;
        cin >> n >> m;

        vector<ll> P,Q;

        for(ll i=0;i<n;i++){cin >> a; P.push_back(a);}
        for(ll j=0;j<m;j++){cin >> a; Q.push_back(a);}

        ll j=0;
        
        while(j<m){
            int i=0;
            int k = Q[j];
            while(k>P[i]){
                k -=P[i];
                i++;
            }
            cout << i+1 <<' '<< k << '\n';
            j++;
        }
    return 0;
}