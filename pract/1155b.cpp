#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    int n;
    cin >> n;

    string s;
    cin >> s;

    int k = n-11, i=0;
    k/= 2;

    bool no8Flag = false;

    int count8 =0;
    int final8pos = -1; 
    while(count8 <=k){
        if(i == n){
            no8Flag = true;
            break;
        }
        else if(s[i++] == '8'){
            count8++;
            final8pos = i-1;
        }
    }


    if(no8Flag){
        cout << "NO\n";
    }
    else if(final8pos - k<=k){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    // code goes here
    return 0;
}