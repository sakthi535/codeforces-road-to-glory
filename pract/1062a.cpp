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

    vector<int> A(1001);
    int a;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }

    int i=0,count=0;


    while(i<n){
        int temp=0;
        while(A.at(i+1) == A.at(i)+1){
            temp++;
            i++;

        }
        if(temp>0 ){
            if(i == n-1){
                count++;
            }
            count+=temp-1;
        }
        i++;
    }


    cout << count << '\n';


    // code goes here
    return 0;
}