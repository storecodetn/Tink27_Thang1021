#include <bits/stdc++.h>
using namespace std;
FILE *fi = freopen("afrequency.inp", "r", stdin);
FILE *fo = freopen("afrequency.out", "w", stdout);
const int maxn = 1e6+10;
int a[maxn], n;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(); cout.tie();
  int n;
  cin>>n;
  for (int i=1; i<=n; i++)
  {
    cin>>a[i];
  }
  sort(a+1, a+n+1, greater<int>());
  int cnt = 1, num = a[1];
  pair<int,int> ans = {-1, INT_MAX};
  for (int i=2; i<=n; i++)
  {
    if(num != a[i])
    {
      if(cnt < ans.second )
      {
        ans.first = num;
        ans.second = cnt;
      }
      cnt = 1;
      num = a[i];
      continue;
    }
    if(a[i] == num)
      cnt ++;
  }
  if(cnt < ans.second)
  {
    ans.first = num;
    ans.second = cnt;
  }
  cout<<ans.first;
  return 0;
}