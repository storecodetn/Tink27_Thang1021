#include<bits/stdc++.h>
using namespace std;
int n,m,used[101][101];
char c;
int dr[4]={-1,0,1,0};
int dc[4]={0,-1,0,1};
void DFS(int u,int v){
    used[u][v]=1;
    for(int i=0;i<4;i++){
        int p=u+dr[i];
        int q=v+dc[i];
        if(1<=p && p<=n && 1<=q && q<=m && used[p][q]==0){
            DFS(p,q);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>c;
            if(c=='.'){
                used[i][j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(used[i][j]==0){
                cnt++;
                DFS(i,j);
            }
        }
    }
    cout<<cnt;
}
