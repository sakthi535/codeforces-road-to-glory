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
       // code goes here

        int n;
        cin >> n;

        vector<int> S,E,D;

        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            S.push_back(a);
        }

        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            E.push_back(a);
        }

        int start = S.at(0);
        for(int i=0;i<n;i++){
            if(S.at(i)>start){start=S.at(i);}
            D.push_back(E.at(i)-start);
            start = E.at(i);
        }

        for(auto i:D){
            cout << i << ' ';
        }
        cout << '\n';


    }


    return 0;
}