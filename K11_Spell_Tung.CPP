#include <bits/stdc++.h>
using namespace std;
const int N=310;
#define ii pair<int,int>
struct iii{
    int x,y,z;
};
int dp[N][N][N],n,m,k,ans;
int hx[10]={1,0,-1,0};
int hy[10]={0,1,0,-1};
string s,a[N];
deque<iii> q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    cin>>s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            {
                for(int z=1;z<=k;z++)
                    dp[i][j][z]=1e7;
                q.push_back({i,j,0});
            }
    ans=1e7;
    while(!q.empty())
    {
        iii u=q.front();
        q.pop_front();
        for(int i=0;i<4;i++)
        {
            int x=u.x+hx[i];
            int y=u.y+hy[i];
            int w=u.z;
            if(w==k)
                ans=min(ans,dp[u.x][u.y][w]);
            if(x<=0 || x>n || y<=0 || y>m || w==k)
                continue;
            if(a[u.x][u.y-1]==s[w])
            {
                if(dp[x][y][w+1]>dp[u.x][u.y][u.z]+1)
                    {
                        dp[x][y][w+1]=dp[u.x][u.y][u.z]+1;
                        q.push_front({x,y,w+1});
                    }
            }
             if(dp[x][y][w]>dp[u.x][u.y][u.z]+1)
                    {
                        dp[x][y][w]=dp[u.x][u.y][u.z]+1;
                        q.push_back({x,y,w});
                    }
        }
    }
    cout<<ans;
}
