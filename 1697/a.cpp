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

        int n,m,sum=0;
        cin >> n >> m;
        
        vector<int> A;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            sum +=a;
        }

        cout << max(sum-m,0) << '\n';




    }
    // code goes here
    return 0;
}