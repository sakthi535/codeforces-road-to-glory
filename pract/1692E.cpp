#include <bits/stdc++.h>

// TODO:unsolved  

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
        int n,s, maxsum=0, res=0;
        cin >> n >> s;

        vector<int> vec;
        for(int i=0;i<n;i++){int a; cin >> a; vec.push_back(a); maxsum+=i;}

        int i=0,j=n-1;

        if(maxsum <s){cout << -1 << '\n';}
        else if(maxsum == s){cout << 0 << '\n';}
        else{
            int tofind = maxsum - s;
            while(tofind >0){
                if(vec[i] == 0){
                    if(vec[j] == 1){
                        j--;
                        tofind--;
                        res++;
                    }
                }
                else{

                }
            }




        }


       // code goes here
    }
    // code goes here
    return 0;
}