#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;

    for(ll i=1; i<=n; i++)
    {
        ll cnt = 1LL +(i-1) * (i-2) / 2;
        cnt = cnt* (i-1) * (i+4);
        cout<<cnt<<endl;
    }


    return 0;
}
