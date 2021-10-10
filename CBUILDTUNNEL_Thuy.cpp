#include <bits/stdc++.h>
using namespace std;
int n,x;
int f[100005];
vector <int> e;
int main(){
    freopen("CBUILDTUNNEL.inp","r",stdin);
    freopen("CBUILDTUNNEL.out","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>x;
        e.push_back(x);
    }
    if (n==1){
        if (e[0]==0) cout<<"Possible";
        else cout<<"Impossible";
        return 0;
    }
    sort(e.begin(),e.end());
    if (e[e.size()-1]==e[e.size()-2]){
        bool che=0; int m,p,cnt,cnt2;
        if (e[e.size()-1]==1 && n>2){
            che=1;
        }
        if (e[e.size()-1]==2) m=2;
        else{
            m=(e[e.size()-1]+1)/2 +1;
        }
        p=m-1;
        cnt=(e[e.size()-1]+1)%2;
        if (cnt==0) cnt=2;
        cnt2=cnt;
        for (int i=0; i<e.size(); i++){
            f[e[i]]++;
            if (e[i]>=m) continue;
            else{
                if (e[i]==p){
                    if (cnt>0) cnt--;
                    else che=1;
                }
                else che=1;
            }
        }
        for (int i=p; i<=e[e.size()-1]; i++){
            if (i==p){
                if (f[i]<cnt2){
                    che=1; break;
                }
            }
            else{
                if (f[i]<2){
                    che=1; break;
                }
            }
        }
        if (che==0) cout<<"Possible";
        else cout<<"Impossible";
    }
    else{
        cout<<"Impossible";
    }
}
