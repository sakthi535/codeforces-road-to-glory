#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    int p,q,a;
    cin >> p >> q;

    vector<int> A;
    for(int i=0;i<p;i++){
        cin >> a;
        A.push_back(a);
    }

    // sort(A.begin(), A.end());

    int global_x=0;

    for(int i=0;i<q;i++){
        int x,y;
        cin >> x >> y;

        if(x > global_x){
            partial_sort(A.begin(),A.begin()+x,A.end(), greater<int>());
            global_x = x;
        }
        int pos = x-y;

        int val=0;
        for(int j=pos;j<pos+y;j++){
            val += A.at(j);
        }
        cout << val << '\n';
    }
    return 0;
}