#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,a,b) for (int i=a;i<=b;i++)
typedef pair<int,int> ii;
const string name="";

long long n,a[1000001],res,tmp;
//-------------
int main()
{
    //freopen("1.txt","r",stdin);
    //freopen(".inp","r",stdin);
    //freopen(".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    tmp=n;
    for (int i=1;i<=n;i++)
    {
        if (tmp==0) break;
        if (a[i]+1<=tmp)
        {
            res+=a[i];
            tmp-=a[i]+1;
        }
        else
        {
            res+=tmp-1;
            break;
        }
    }
    cout<<res;
    return 0;
}
