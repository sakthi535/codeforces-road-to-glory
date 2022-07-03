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

        string s,t;
        cin >> s >> t;

        int count =0;

        for(auto i:t){
            if(i== 'o'){
                count ++;
                break;
            }
        }

        if(count){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }


       // code goes here
    }
    // code goes here
    return 0;
}