#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0; i < n; i++)
#define MX 200001
int ar[MX], n;


int main()
{
    cin >> n;

    FOR(i, n){
        cin >> ar[i];
    }
    int countVar = 0, ans = 0;
    FOR(i, n){
        countVar++;
        if(ar[i] > 2 * ar[i + 1]){ans = max(countVar, ans);countVar = 0; }
    }

    cout << ans << endl;
}

