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
        vector<int> A,B;
        for(int i=0;i<n;i++){int a;cin >> a; A.push_back(a);}

        int i=0, j=n-1;

        while(i<=j){
            B.push_back(A[i++]);
            if(i<=j){
                B.push_back(A[j--]);
            }
        }


        for(auto i:B){cout << i << ' ';}
        cout << '\n';
    }


    


    // code goes here
    return 0;
}