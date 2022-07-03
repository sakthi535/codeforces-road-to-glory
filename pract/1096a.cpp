#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {

        int l,r;
        cin >> l >> r;

        if(l*2 <=r){
            cout << l << ' ' << l*2 << '\n';
        }

       // code goes here
    }

    return 0;
}