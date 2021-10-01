#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
string s, t;
pair<int, int> ds[maxn], dt[maxn];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(); cout.tie();
  cin>>s>>t;
  int n = s.size(), m = t.size();
  s = "." + s;
  t = "." + t;
  int q;
  s[1] == 'A' ? ds[1].first = 1 : ds[1].second = 1;
  t[1] == 'A' ? dt[1].first = 1 : dt[1].second = 1;
  for (int i=2; i<=n; i++)
  {
    if(s[i] == 'A')
    {
      ds[i].first = ds[i-1].first + 1;
      ds[i].second = ds[i-1].second;
    }
    else{
      ds[i].second = ds[i-1].second + 1;
      ds[i].first = ds[i-1].first;
    }
  }
  for (int i=2; i<=m; i++)
  {
    if(t[i] == 'A')
    {
      dt[i].first = dt[i-1].first + 1;
      dt[i].second = dt[i-1].second;
    }
    else{
      dt[i].second = dt[i-1].second + 1;
      dt[i].first = dt[i-1].first;
    }
  }
  cin>>q;
  while(q--)
  {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int das = 0, dbs = 0, dat = 0, dbt = 0;
    das = (ds[b].first - ds[a-1].first)%3;
    dbs = (ds[b].second - ds[a-1].second)%3;
    dat = (dt[d].first - dt[c-1].first)%3;
    dbt = (dt[d].second - dt[c-1].second)%3;
    // if(abs(das%3 - dat%3) == abs(dbs%3 - dbt%3))
    // {
    //   cout<<"Yes\n";
    // }
    // else 
      if((dbt - dat - dbs + das)%3 == 0)
      cout<<"YES\n";
      else cout<<"NO\n";
  }
  return 0;
}
