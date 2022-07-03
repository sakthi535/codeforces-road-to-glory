#include <bits/stdc++.h>

// TODO Uncompleted

#define forn(i,x) for(i=0;i<x;i++) 

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(string &s, int x, int y){
    int res = 0;
	for (auto c : s) if (c - '0' == x) {
		++res;
		swap(x, y);
	}
	if (x != y && res % 2 == 1)
		--res;
	return res;
}


int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {

        string s;
        cin >> s;


        int soln=0;
        int i,j;

        forn(i, 10) {
            forn(j, 10){
                soln = max(soln, solve(s, i, j));
            }
        }

        cout << s.size() - soln << '\n';


    }

    return 0;
}