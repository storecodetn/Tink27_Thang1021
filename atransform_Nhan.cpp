#include <bits/stdc++.h>
using namespace std;
FILE *fi = freopen("atransform.inp", "r", stdin);
FILE *fo = freopen("atransform.out", "w", stdout);
int a[111], n;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(); cout.tie();
  cin>>n;
  int cnta = 0, cntd = 0;
  for (int i=1; i<=n; i++)
  {
    cin>>a[i];
    if(a[i] == 0)
    {
      cout<<-1;
      return 0;
    }
    a[i] > 0 ? cnta++:cntd++;
  }
  cout<<min(cnta, cntd);
  return 0;
}