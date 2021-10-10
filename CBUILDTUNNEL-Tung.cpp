#include <bits/stdc++.h>
using namespace std;
int n,d[100001],b[100001];
vector<int> a;
bool ok;
int main()
{
    freopen("CBUILDTUNNEL.INP","r",stdin);
    freopen("CBUILDTUNNEL.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        b[i]=x;
        d[x]++;
    }
    for(int i=n;i>=0;i--)
        if(d[i]!=0)
            a.push_back(i);
    for(int i=0;i<a.size();i++)
    {
        ok=false;
        if(d[a[i]]==1 && a[i]-i>0)
            break;
        if(i>0 && a[i-1]-a[i]!=1)
            break;
        if(i==0 && d[a[i]]==1 && a.size()>1)
            break;
        if(a[i]-i==1 && d[a[i]]==2)
            ok=true;
        if(a[i]-i==0 && d[a[i]]==1)
            ok=true;
    }
    if(ok)
        cout<<"Possible";
    else
        cout<<"Impossible";
}
