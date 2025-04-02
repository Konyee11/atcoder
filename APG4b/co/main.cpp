#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define debug(x) cerr << #x << ": " << x << '\n'
#else
#define debug(x) 0
#endif

void solve() {
  int p, price, N;

  cin >> p;

  // Pattern1
  if (p == 1) {
    cin >> price >> N;
    cout << price * N<< endl;
  }
  // Pattern2
  else if (p == 2) {
    string text;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();
}
