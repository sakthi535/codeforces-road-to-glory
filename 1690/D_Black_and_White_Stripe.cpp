#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int countW(string S, int i, int j){

}


int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {

        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        int i=0, j=n-1;

        while(s[i] == 'W'){i++;}
        while(s[j] == 'B'){j--;}

        if(j-i ==k){
            cout << countW(s, i ,j) << '\n';
        }
        else if(j-i >k){

        }
        else{
            int rem = k- (j-i);
            int ans = countW(s,i,j);
            if(i<rem){ans+=i;rem-=i;}
            ans += (n-j) - rem;

        }



    }
    return 0;
}