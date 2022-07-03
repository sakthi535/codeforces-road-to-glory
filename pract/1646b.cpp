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

        int n;
        cin >> n;

        vector<int> P;
        for(int i=0;i<n;i++){int a; cin >> a; P.push_back(a);}

        sort(P.begin(), P.end());

        if(P[0] + P[1] < P[n-1]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }


    }


    // code goes here
    return 0;
}