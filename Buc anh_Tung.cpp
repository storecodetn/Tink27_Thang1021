#include <bits/stdc++.h>
using namespace std;
char a[1000][1000];
int n,m,ans;
bool f[1000][1000];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='*')
        {
            if(f[i-1][j] || f[i][j-1])
                f[i][j]=true;
            else
            {
                f[i][j]=true;
                ans++;
            }
        }
    }
    cout<<ans;
}
