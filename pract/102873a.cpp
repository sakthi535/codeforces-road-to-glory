#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    
        
        int k,n;
        cin >> n >> k;

        map<int, int> hash;

        for(int i=1;i<=n;i++){
            hash[i] = 0;
        }

        for(int i=0;i<k;i++){
            int a;
            cin >> a;
            hash[a]++;
        }

        int count =0;
        for(auto i:hash){
            if(i.second == 0){
                count ++;
            }
        }

        if(count == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }



       // code goes here
}