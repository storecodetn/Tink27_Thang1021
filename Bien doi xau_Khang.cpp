#include<bits/stdc++.h>
using namespace std;
int cnt1[100001],cnt2[100001];
int main(){
    int q;
    string s,t;
    cin>>s>>t;
    s=" "+s;
    t=" "+t;
    cin>>q;
    for(int i=1;i<s.size();i++){
        if(s[i]=='A'){
            cnt1[i]=1+cnt1[i-1];
        }
        else{
            cnt1[i]=2+cnt1[i-1];
        }
    }
    for(int i=1;i<t.size();i++){
        if(t[i]=='A'){
            cnt2[i]=1+cnt2[i-1];
        }
        else{
            cnt2[i]=2+cnt2[i-1];
        }
    }
    while(q--){
        int u,v,p,q;
        cin>>u>>v>>p>>q;
        int a=cnt1[v]-cnt1[u-1];
        int b=cnt2[q]-cnt2[p-1];
        int cnt=max(a,b)-min(a,b);
        if(cnt%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
