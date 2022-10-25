#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(ll x, ll y)
{
    ll l = max(x, y) - 1;

    if(l%2==1)
    {
        if(x>y)
        {
            return l*l + 2*l - y + 2;
        }
        else
        {
            return l*l + x;
        }
    }
    else
    {
        if(x>y)
        {
            return l*l + y;
        }
        else
        {
            return l*l + 2*l - x + 2;
        }
    }
}

int main()
{
    ll t, x, y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cout<<solve(x, y)<<endl;
    }
    return 0;
}
