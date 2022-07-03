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

    vector<int> A;
    map<int, int> hash;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        hash[a]++;
        A.push_back(a);
    } 

    sort(A.begin(), A.end());

    int ones = 0;
    
    int temp = min(hash[6],hash[3]);
    hash[6] -= temp;
    hash[3] -= temp;
    ones += temp; 

    int six3=temp;

    temp = min(hash[6],hash[2]);
    hash[6] -= temp;
    hash[2] -= temp;
    ones += temp; 
    int six2=temp;


    temp = min(hash[4],hash[2]);
    hash[4] -= temp;
    hash[2] -= temp; 
    ones += temp; 
    int four2=temp;


    hash[1] -= ones;

    bool flag = false;
    for(int i=0;i<7;i++){
        if(hash[i+1] != 0){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << -1 << '\n';
    }
    else{
        for(int j=0;j<four2;j++){
            cout << "1 2 4\n";
        }
        for(int j=0;j<six2;j++){
            cout << "1 2 6\n";
        }
        for(int j=0;j<six3;j++){
            cout << "1 3 6\n";
        }
        
    }


    return 0;
}