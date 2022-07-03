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
        bool flag = true;
        ll n;
        cin >> n;

        if(n%2!= 0){
            if(n>1){
                cout << 1 << '\n';
            }
            else{
                cout << 3 << '\n';
            }
        }
        else{
            ll k=0;
            while(n%2 == 0){
                n/=2;
                k++;
            }
            while(n!=1){
                n/=2;
                if(n%2 == 1){
                    cout << pow(2,k) << '\n';
                    flag = false;
                    break; 
                }

            }
            if(flag){
                cout << pow(2,k) +1 << '\n';
            }

        }


    }

    return 0;
}