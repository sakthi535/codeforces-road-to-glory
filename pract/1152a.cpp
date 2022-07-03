#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    
        int n,m;
        cin >> n >> m;
        int a;

        int o1=0,o2=0,e1=0,e2=0;

        vector<int> A,B;

        for(int i=0;i<n;i++){
            cin >> a;
            if(a%2 == 0){
                e1++;
            }
            else{
                o1++;
            }
        }

        for(int i=0;i<m;i++){
            cin >> a;
            if(a%2 == 0){
                e2++;
            }
            else{
                o2++;
            }
        }

        cout << min(o1,e2) + min(o2,e1);

}