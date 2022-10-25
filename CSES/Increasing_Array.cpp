#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, mx, x, sum=0;
    cin>>n;
    cin>>mx;

    for(ll i=1; i<n; i++)
    {
        cin>>x;
        mx = max(mx, x);
        sum += (mx-x);
    }

    cout<<sum<<endl;

    return 0;
}
