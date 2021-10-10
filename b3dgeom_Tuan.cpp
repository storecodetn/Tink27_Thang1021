#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,a,b) for (int i=a;i<=b;i++)
typedef pair<int,int> ii;
typedef double db;
const string name="";

int t;
double x[4],y[4],z[4];
//-------------
db square (db a)
{
    return a*a;
}
//--------------
db distance(db x1,db y1,db z1,db x2,db y2,db z2)
{
    return sqrt(square(x1-x2)+square(y1-y2)+square(z1-z2));
}
//--------------
db dinhthuc(db a,db b,db c,db d)
{
    return a*c-b*d;
}
//-------------
db kq()
{
    db xab=x[2]-x[1],yab=y[2]-y[1],zab=z[2]-z[1];
    db xbc=x[3]-x[2],ybc=y[3]-y[2],zbc=z[3]-z[2];
    db lbc=sqrt(xbc*xbc + ybc*ybc + zbc*zbc);
    db l1=dinhthuc(yab,zab,zbc,ybc);
    db l2=-dinhthuc(xab,zab,zbc,xbc);
    db l3=dinhthuc(xab,yab,ybc,xbc);
    return sqrt(l1*l1 + l2*l2 + l3*l3)/lbc;
}
//-------------
int main()
{
    //freopen("1.txt","r",stdin);
    freopen("b3dgeom.inp","r",stdin);
    freopen("b3dgeom.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while (t--)
    {
        for (int i=1;i<=3;i++)
            cin>>x[i]>>y[i]>>z[i];
        cout<<fixed<<setprecision(2)<<kq()<<"\n";
    }
    return 0;
}
