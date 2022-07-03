#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here

    int n;
    cin >> n;

    vector<int> A;
    for(int i=0;i<n;i++){int a; cin >> a; A.push_back(a);}

    int i=0,j=n-1;

    int scoreA =0, scoreB=0;

    while(i<=j){
        if(A[i] > A[j]){
            scoreA += A[i++];
        }
        else{
            scoreA += A[j--];
        }
        if(i<=j){
            if(A[i] > A[j]){
                scoreB += A[i++];
            }
            else{
                scoreB += A[j--];
            }    
        }
    }

    cout << scoreA <<' ' << scoreB << '\n';
    return 0;
}