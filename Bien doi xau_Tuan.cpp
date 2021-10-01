#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,a,b) for (int i=a;i<=b;i++)
typedef pair<int,int> ii;

string s,t;
int q,buh,he,lmao,dak,n,m,a[100001],b[100001];
//--------------
void init()
{
    for (int i=1;i<=n;i++)
    {
        if (s[i]=='A')
            a[i]=a[i-1]+1;
        else a[i]=a[i-1]+2;
    }
    for (int i=1;i<=m;i++)
    {
        if (t[i]=='A')
            b[i]=b[i-1]+1;
        else b[i]=b[i-1]+2;
    }
}
//-------------
bool query(int buh,int he,int lmao,int dak)
{
    return ((a[he]-a[buh-1])%3==(b[dak]-b[lmao-1])%3);
}
//---------------
int main()
{
    //freopen("1.txt","r",stdin);
    //freopen(".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s>>t;
    n=s.size(),m=t.size();
    s=" "+s,t=" "+t;
    init();
    cin>>q;
    while (q--)
    {
        cin>>buh>>he>>lmao>>dak;
        if (query(buh,he,lmao,dak))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
