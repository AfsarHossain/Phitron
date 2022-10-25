#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int n, x, num;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        num ^= i;
        cout<<num<<" ";
    }

    cout<<endl;
    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        num ^= x;
        cout<<num<<" ";
        //cout<<(num^i)<<endl;
    }
    cout<<endl;
    cout<<num<<endl;

    /// My Logic
    /**
    ll n;
    cin>>n;

    ll ara[n+1];
    for(ll i=0; i<n-1; i++)
    {
        cin>>ara[i];
    }

    sort(ara, ara+n);
    for(int i=0, j=1; i<n-1; i++, j++)
    {
        if(ara[i] != j)
        {
            cout<<j<<endl;
            break;
        }
    }

    **/
    return 0;
}
