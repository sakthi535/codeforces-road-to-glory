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

    int t;
    cin >> t;
    
    while(t--)
    {

        ll n,o=0,e=0,a;
        cin >> n;

        vector<ll> A, even;
        for(ll i=0;i<n;i++){cin >> a;A.push_back(a);}


        for(ll i=0;i<n;i++){
            if(A.at(i) %2 == 0){
                e++;
                // cout << A.at(i) << "**\n";
                even.push_back(A.at(i));
            }
            else{
                o++;
            }
        }

        if(o!=0){
            cout << e << '\n';
        }
        else{
            sort(even.begin(), even.end());
            ll m=INT_MAX;

            // for(auto i:even){
            //     cout << "* " << i << ' ' ;
            // }
            // cout << '\n';
            for(auto i:even){
                ll k=2;
                ll j=0;
                while(i%k==0){
                    k *=2;
                    j++;
                }
                m = min(m,j);
            }
            cout << m +e -1 << '\n';
        }

    }


    return 0;
}