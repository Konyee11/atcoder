#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define debug(x) cerr << #x << ": " << x << '\n'
#else
#define debug(x) 0
#endif

void solve() {
  int x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;

  x *= (a + b);
  cout << x << endl;

  x *= x;
  cout << x << endl;

  x--;
  cout << x << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();
}
