#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,a,b) for (int i=a;i<=b;i++)
typedef pair<int,int> ii;
const string name="";

string s,t;
int n,dp[1001][1001],res1=1,res2=1;
bool f[1001][1001];
//-----------
int main()
{
    freopen("BDOIXUNG.inp","r",stdin);
    freopen("BDOIXUNG.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    reverse(s.begin(),s.end());
    t=s;
    reverse(s.begin(),s.end());
    s=" "+s;
    t=" "+t;
    n=s.size()-1;
    for (int i=1;i<n;i++)
    {
        if (s[i]==s[i+1])
        {
            res1=2;
            f[i][i+1]=true;
        }
        f[i][i]=1;
        dp[i][i]=1;
    }
    f[n][n]=1;
    for (int l=3;l<=n;l++)
    {
        for (int i=1;i<=n-l+1;i++)
        {
            int j=i+l-1;
            if (s[i]==s[j] && f[i+1][j-1])
            {
                f[i][j]=true;
                res1=max(res1,l);
            }
            else f[i][j]=false;
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (s[i]==t[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<res1<<"\n"<<dp[n][n];
    return 0;
}
