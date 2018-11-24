#include <bits/stdc++.h>
#include <math.h>
#define inl(x) scanf("%lld",&x)
#define in(x) scanf("%d",&x)
#define ll long long
#define mp(x,y) make_pair(x,y)
#define mx 100000000000000000
using namespace std;

int main()
{
    int n,k;
    in(n);
    in(k);
    string s1;
    cin >> s1;
    int key,faul;
    for(int i=1;i<n;i++)
    {
        key=1;
        for(int j=0;j<n-i;j++)
        {
            if(s1[j]!=s1[j+i])
            {
                key=0;
                break;
            }
        }
        if(key)
        {
            faul=i;
            break;
        }
    }

    if(!key)
    {
        for(int i=0;i<k;i++)
            cout<<s1;
        return 0;
    }
    string ss=s1.substr((n)-faul,n-1);

    //cout << ss << " bal"<<endl;
    cout << (string)s1;
    for(int i=1;i<k;i++)
        cout << ss;

    return 0;
}
