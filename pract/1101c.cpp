#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool merge(int x, int y, int a, int b){
    if(y<a && b>y){
        return false;
    }
    if(a<x && b<x){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {
        int n,a,b;
        cin >> n;

        vector<int> X,Y;

        for(int i=0;i<n;i++){
            cin >> a >> b;
            X.push_back(a);
            Y.push_back(b);

        }        

        int a = X.at(0),b = Y.at(0);
        
        bool set=true;
        int x,y;


        for(int i=1;i<n;i++){
            if(merge(a,b,X.at(i),Y.at(i))){
                a = min(a, X.at(i));
                b = max(b, Y.at(i));
            }
            else{
                if(set){
                    x = X.at(i);
                    y = Y.at(i);
                }
                else{
                    if(merge(a,b,x,y)){
                        a = min(a, X.at(i));
                        b = max(b, Y.at(i));
                    }
                    else{
                        
                    }
                }
                
            }
        }

       // code goes here
    }

    // code goes here
    return 0;
}