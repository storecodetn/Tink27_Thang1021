#include <bits/stdc++.h>

using namespace std;

const int nxm = 1e5 + 10;
FILE *fi = freopen("B3DGEOM.inp", "r", stdin);
FILE *fo = freopen("B3DGEOM.out", "w", stdout);
struct toado{double x, y, z;};
void solve()
{
    toado a, b, c, bc, ab, tich;
    cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z >> c.x >> c.y >> c.z;
    bc.x = c.x - b.x, bc.y = c.y - b.y, bc.z = c.z - b.z;
    ab.x = b.x - a.x, ab.y = b.y - a.y, ab.z = b.z - a.z;
    tich.x = ab.y*bc.z - ab.z*bc.y;
    tich.y = ab.z*bc.x - ab.x*bc.z;
    tich.z = ab.x*bc.y - ab.y*bc.x;
    cout << setprecision(2) << fixed << sqrt(tich.x*tich.x + tich.y*tich.y + tich.z*tich.z)/sqrt(bc.x*bc.x + bc.y*bc.y + bc.z*bc.z) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
