#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,a,b) for (int i=a;i<=b;i++)
typedef pair<int,int> ii;

int n,m,res;
char a[101][101];
bool f[101][101];
int dx[]={1,0};
int dy[]={0,1};
//-------------
void dfs(int i,int j)
{
    f[i][j]=true;
    for (int k=0;k<2;k++)
    {
        int x=i+dx[k];
        int y=j+dy[k];
        if (x>0 && x<=n && y>0 && y<=m && !f[x][y] && a[x][y]=='*')
            dfs(x,y);
    }
}
//---------------
int main()
{
    //freopen("1.txt","r",stdin);
    //freopen(".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>a[i][j];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            if (f[i][j] || a[i][j]!='*') continue;
            res++;
            dfs(i,j);
        }
    cout<<res;
    return 0;
}
