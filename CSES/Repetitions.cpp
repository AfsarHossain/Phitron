#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e6+5;
int main()
{
    char s[maxN];
    int len, cur, best;
    cin>>s;

    len = (int) strlen(s);
    cur = best = 1;

    for(int i=1; i<len; i++)
    {
        if(s[i] == s[i-1])
        {
            cur++;
        }
        else
        {
            cur = 1;
        }
        best = max(cur, best);
    }

    cout<<best<<endl;
    //cout<<s<<endl;
    //cout<<len<<endl;
    return 0;
}
