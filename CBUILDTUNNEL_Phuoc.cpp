#include <bits/stdc++.h>
#define yes "Possible"
#define no "Impossible"
using namespace std;

const int mN = 1e5 + 10;
int n;
int cnt[mN];

int main() {
    freopen("CBUILDTUNNEL.inp", "r", stdin);
    freopen("CBUILDTUNNEL.out", "w", stdout);
    int x, maxDis = 0, minDis;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        cnt[x]++;
        maxDis = max(maxDis, x);
    }
    minDis = maxDis / 2; // khoảng cách xa nhất của đỉnh trung tâm
    for (int i = maxDis; i > minDis; i--) {
        if (cnt[i] < 2) { // nếu không có đỉnh match với nó
            cout << no;
            return 0;
        }
    }
    if (maxDis % 2 == 1 && cnt[minDis + 1] != 2) cout << no; // trong cây đường kính chẵn sẽ có 2 đỉnh trung tâm
    else if (maxDis % 2 == 0 && cnt[minDis] != 1) cout << no; // trong cây đường kính lẻ có 1 đỉnh trung tâm
    else cout << yes;
}
