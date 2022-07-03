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
        int a,b;

        cin >> a >> b;

        if(a>b){
            if((a-b)%2 == 0){
                cout << 1 << '\n';
            }
            else{
                cout << 2 << '\n';
            }
        }
        else if(a<b){
            if((b-a)%2 != 0){
                cout << 1 << '\n';
            }
            else{
                cout << 2 << '\n';
            }
        }
        else{
            cout << 0 <<'\n';
        }

       // code goes here
    }

    // code goes here
    return 0;
}