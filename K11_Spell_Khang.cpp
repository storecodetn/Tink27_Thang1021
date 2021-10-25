#include<bits/stdc++.h>
using namespace std;
int n,m,k,d[305][305][305];
char a[305][305];
int drc[5]={0,-1,0,1,0};
string b;
bool check(int u,int v){
    return (1<=u && u<=m) && (1<=v && v<=n);
}
int main(){
    ios::sync_with_stdio(0);
    cin>>m>>n>>k;
    cin>>b;
    b=" "+b;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    memset(d,-1,sizeof d);
    queue<tuple<int,int,int> > qu;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++){
            d[0][i][j]=0;
            qu.push({0,i,j});
        }
    while(!qu.empty()){
        auto [cnt,u,v]=qu.front();
        qu.pop();
        if(cnt==k){
            cout<<d[k][u][v];
            return 0;
        }
        for(int i=0;i<4;i++){
            int u1=u+drc[i];
            int v1=v+drc[i+1];
            if(!check(u1,v1)) continue;
            int cnt1=cnt;
            if(a[u1][v1]==b[cnt+1]) cnt1++;
            if(d[cnt1][u1][v1]==-1){
                d[cnt1][u1][v1]=d[cnt][u][v]+1;
                qu.push({cnt1,u1,v1});
            }
        }
    }
    return 0;
}